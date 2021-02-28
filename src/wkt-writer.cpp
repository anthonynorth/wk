
#include "cpp11.hpp"
#include "wk-v1-handler.hpp"
#include <iostream>
#include <sstream>
#include <vector>

class WKTWriterHandler: public WKVoidHandler {
public:
  cpp11::writable::strings result;
  std::stringstream out;
  wk_meta_t parentMeta;
  std::vector<const wk_meta_t*> stack;
  R_xlen_t feat_id;

  WKTWriterHandler(int precision, bool trim) {
    this->out.imbue(std::locale::classic());
    this->out.precision(precision);
    if (trim) {
      this->out.unsetf(out.fixed);
    } else {
      this->out.setf(out.fixed);
    }
  }

  bool isNestingCollection() {
    return this->stack.size() > 0 &&
      (this->stack[this->stack.size() - 1]->geometry_type == WK_GEOMETRYCOLLECTION);
  }

  int vector_start(const wk_vector_meta_t* meta) {
    if (meta->size == WK_VECTOR_SIZE_UNKNOWN) {
        stop("Can't handle vector of unknown size");
    }

    result = cpp11::writable::strings(meta->size);
    return WK_CONTINUE;
  }

  virtual int feature_start(const wk_vector_meta_t* meta, R_xlen_t feat_id) {
    out.str("");
    this->stack.clear();
    this->feat_id = feat_id;
    return WK_CONTINUE;
  }

  virtual int null_feature(const wk_vector_meta_t* meta, R_xlen_t feat_id) {
    result[feat_id] = NA_STRING;
    return WK_ABORT_FEATURE;
  }

  int geometry_start(const wk_meta_t* meta, uint32_t part_id) {
    if ((part_id != 0) && (this->stack.size() > 0)) {
      out << ", ";
    }

    if ((meta->srid != WK_SRID_NONE) && (this->stack.size() == 0)) {
      out << "SRID=" << meta->srid << ";";
    }

    if ((this->stack.size() == 0) || this->isNestingCollection()) {
        switch (meta->geometry_type) {
        case WK_POINT:
            out << "POINT ";
            break;
        case WK_LINESTRING:
            out << "LINESTRING ";
            break;
        case WK_POLYGON:
            out << "POLYGON ";
            break;
        case WK_MULTIPOINT:
            out << "MULTIPOINT ";
            break;
        case WK_MULTILINESTRING:
            out << "MULTILINESTRING ";
            break;
        case WK_MULTIPOLYGON:
            out << "MULTIPOLYGON ";
            break;
        case WK_GEOMETRYCOLLECTION:
            out << "GEOMETRYCOLLECTION ";
            break;

        default:
            std::stringstream err;
            err << "Can't write geometry type '" << meta->geometry_type << "' as WKT";
            return this->error(err.str().c_str());
        }

        if ((meta->size != 0) &&(meta->flags & WK_FLAG_HAS_Z) && (meta->flags & WK_FLAG_HAS_M)) {
            out << "ZM ";
        } else if ((meta->size != 0) && (meta->flags & WK_FLAG_HAS_Z)) {
            out << "Z ";
        } else if ((meta->size != 0) && (meta->flags & WK_FLAG_HAS_M)) {
            out << "M ";
        }
    }

    if (meta->size == 0) {
      out << "EMPTY";
    } else {
      out << "(";
    }

    this->stack.push_back(meta);
    return WK_CONTINUE;
  }

  int ring_start(const wk_meta_t* meta, uint32_t size, uint32_t ring_id) {
    if (ring_id > 0) {
      out << ", ";
    }
    
    out << "(";
    return WK_CONTINUE;
  }

  virtual int coord(const wk_meta_t* meta, const wk_coord_t coord, uint32_t coord_id) {
    if (coord_id > 0) {
      out << ", ";
    }

    out << coord.v[0] << " " << coord.v[1];
    if ((meta->flags & WK_FLAG_HAS_Z) && (meta->flags & WK_FLAG_HAS_M)) {
        out << " " << coord.v[2] << " " << coord.v[3];
    } else if ((meta->flags & WK_FLAG_HAS_Z) || (meta->flags & WK_FLAG_HAS_M)) {
        out << " " << coord.v[2];
    }

    return WK_CONTINUE;
  }

  int ring_end(const wk_meta_t* meta, uint32_t size, uint32_t ring_id) {
    out << ")";
    return WK_CONTINUE;
  }

  int geometry_end(const wk_meta_t* meta, uint32_t part_id) {
    this->stack.pop_back();

    if (meta->size != 0) {
      out << ")";
    }

    return WK_CONTINUE;
  }

  int feature_end(const wk_vector_meta_t* meta, R_xlen_t feat_id) {
    result[feat_id] = this->out.str();
    return WK_CONTINUE;
  }

  virtual SEXP vector_end(const wk_vector_meta_t* meta) {
    this->result.attr("class") = {"wk_wkt", "wk_vctr"};
    return this->result;
  }

  void nextfeature_start(size_t feat_id) {
    this->stack.clear();
  }
};

class WKTFormatHandler: public WKTWriterHandler {
public:
  WKTFormatHandler(int precision, bool trim, int max_coords): 
    WKTWriterHandler(precision, trim), 
    current_coords(0), 
    max_coords(max_coords),
    current_feat_id(0) {}

  virtual int feature_start(const wk_vector_meta_t* meta, R_xlen_t feat_id) {
    this->current_coords = 0;
    this->current_feat_id = feat_id;
    return WKTWriterHandler::feature_start(meta, feat_id);
  }

  virtual int null_feature(const wk_vector_meta_t* meta, R_xlen_t feat_id) {
    this->out << "<null feature>";
    return WK_CONTINUE;
  }

  virtual int coord(const wk_meta_t* meta, const wk_coord_t coord, uint32_t coord_id) {
    WKTWriterHandler::coord(meta, coord, coord_id);
    if (++this->current_coords >= this->max_coords) {
      this->out << "...";
      this->result[this->current_feat_id] = this->out.str();
      return WK_ABORT_FEATURE;
    } else {
      return WK_CONTINUE;
    }
  }

  int error(const char* message) {
    this->out << "!!! " << message;
    this->result[this->current_feat_id] = this->out.str();
    return WK_ABORT_FEATURE;
  }

  virtual SEXP vector_end(const wk_vector_meta_t* meta) {
    return this->result;
  }

private:
  int current_coords;
  int max_coords;
  R_xlen_t current_feat_id;
};

[[cpp11::register]]
cpp11::sexp wk_cpp_wkt_writer(int precision = 16, bool trim = true) {
  return WKHandlerFactory<WKTWriterHandler>::create_xptr(new WKTWriterHandler(precision, trim));
}

[[cpp11::register]]
cpp11::sexp wk_cpp_wkt_formatter(int precision = 16, bool trim = true, int max_coords = 5) {
  return WKHandlerFactory<WKTFormatHandler>::create_xptr(new WKTFormatHandler(precision, trim, max_coords));
}