
#ifndef WK_TRANSLATOR_H
#define WK_TRANSLATOR_H

#include <iostream>
#include "wk/translator.h"
#include "wk/wkb-reader.h"

class WKBWKTTranslator: WKBReader, public WKTranslator {
public:

  WKBWKTTranslator(BinaryReader& reader, std::ostream& stream): WKBReader(reader), out(stream) {}

  // expose these as the public interface
  bool hasNextFeature() {
    return WKBReader::hasNextFeature();
  }

  virtual void iterateFeature() {
    WKBReader::iterateFeature();
  }

  // output stream manipulations I'd rather not remember
  // how to do again
  void ensureClassicLocale() {
    this->out.imbue(std::locale::classic());
  }

  void setRoundingPrecision(int precision) {
    this->out.precision(precision);
  }

  void setTrim(bool trim) {
    if (trim) {
      this->out.unsetf(out.fixed);
    } else {
      this->out.setf(out.fixed);
    }
  }

protected:
  std::ostream& out;

  // default null handling returns ""
  virtual void nextNull(size_t featureId) {

  }

  // theoretically, somebody might want to change this behaviour
  virtual void nextFeature(size_t featureId) {
    WKBReader::nextFeature(featureId);
  }

private:
  WKGeometryMeta newMeta;

  // wait until the SRID to print the geometry type if there is one
  void nextGeometryType(const WKGeometryMeta meta, uint32_t partId) {
    this->newMeta = this->getNewMeta(meta);
    if (!meta.hasSRID) {
      this->writeGeometrySep(this->newMeta, partId, 0);
    }
  }

  void nextSRID(const WKGeometryMeta meta, uint32_t partId, uint32_t srid) {
    this->writeGeometrySep(this->newMeta, partId, srid);
  }

  void nextGeometry(const WKGeometryMeta meta, uint32_t partId) {
    this->writeGeometryOpen(meta.size);
    WKBReader::nextGeometry(meta, partId);
    this->writeGeometryClose(meta.size);
  }

  void nextLinearRing(const WKGeometryMeta meta, uint32_t ringId, uint32_t size) {
    this->writeRingSep(ringId);
    this->out << "(";
    WKBReader::nextLinearRing(meta, ringId, size);
    this->out << ")";
  }

  void nextCoordinate(const WKCoord coord, uint32_t coordId) {
    this->writeCoordSep(coordId);
    this->out << coord.x << " " << coord.y;
    if (this->newMeta.hasZ && coord.hasZ) {
      this->out << " " << coord.z;
    }
    if (this->newMeta.hasM && coord.hasM) {
      this->out << " " << coord.m;
    }
  }

  void writeGeometryOpen(uint32_t size) {
    if (size == 0) {
      this->out << "EMPTY";
    } else {
      this->out << "(";
    }
  }

  void writeGeometryClose(uint32_t size) {
    if (size > 0) {
      this->out << ")";
    }
  }

  void writeGeometrySep(const WKGeometryMeta meta, uint32_t partId, uint32_t srid) {
    bool iterCollection = iteratingCollection();
    bool iterMulti = iteratingMulti();

    if ((iterCollection || iterMulti) && partId > 0) {
      this->out << ", ";
    }

    if(iterMulti) {
      return;
    }

    if(!iterCollection && meta.hasSRID) {
      this->out << "SRID=" << srid << ";";
    }

    this->out << meta.wktType() << " ";
  }

  void writeRingSep(uint32_t ringId) {
    if (ringId > 0) {
      this->out << ", ";
    }
  }

  void writeCoordSep(uint32_t coordId) {
    if (coordId > 0) {
      this->out << ", ";
    }
  }

  bool iteratingMulti() {
    size_t stackSize = this->recursionLevel();
    if (stackSize <= 1) {
      return false;
    }

    const WKGeometryMeta nester = this->lastGeometryType(-2);
    return nester.geometryType == WKGeometryType::MultiPoint ||
      nester.geometryType == WKGeometryType::MultiLineString ||
      nester.geometryType == WKGeometryType::MultiPolygon;
  }

  bool iteratingCollection() {
    size_t stackSize = this->recursionLevel();
    if (stackSize <= 1) {
      return false;
    }

    const WKGeometryMeta nester = this->lastGeometryType(-2);
    return nester.geometryType == WKGeometryType::GeometryCollection;
  }
};

#endif
