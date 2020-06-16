// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// cpp_coords_point_translate_wkt
CharacterVector cpp_coords_point_translate_wkt(NumericVector x, NumericVector y, NumericVector z, NumericVector m, int precision, bool trim);
RcppExport SEXP _wk_cpp_coords_point_translate_wkt(SEXP xSEXP, SEXP ySEXP, SEXP zSEXP, SEXP mSEXP, SEXP precisionSEXP, SEXP trimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type z(zSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type precision(precisionSEXP);
    Rcpp::traits::input_parameter< bool >::type trim(trimSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_coords_point_translate_wkt(x, y, z, m, precision, trim));
    return rcpp_result_gen;
END_RCPP
}
// cpp_coords_wkb
List cpp_coords_wkb(List wkb, bool sepNA);
RcppExport SEXP _wk_cpp_coords_wkb(SEXP wkbSEXP, SEXP sepNASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type wkb(wkbSEXP);
    Rcpp::traits::input_parameter< bool >::type sepNA(sepNASEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_coords_wkb(wkb, sepNA));
    return rcpp_result_gen;
END_RCPP
}
// cpp_coords_wkt
List cpp_coords_wkt(CharacterVector wkt, bool sepNA);
RcppExport SEXP _wk_cpp_coords_wkt(SEXP wktSEXP, SEXP sepNASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type wkt(wktSEXP);
    Rcpp::traits::input_parameter< bool >::type sepNA(sepNASEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_coords_wkt(wkt, sepNA));
    return rcpp_result_gen;
END_RCPP
}
// cpp_coords_wksxp
List cpp_coords_wksxp(List wksxp, bool sepNA);
RcppExport SEXP _wk_cpp_coords_wksxp(SEXP wksxpSEXP, SEXP sepNASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type wksxp(wksxpSEXP);
    Rcpp::traits::input_parameter< bool >::type sepNA(sepNASEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_coords_wksxp(wksxp, sepNA));
    return rcpp_result_gen;
END_RCPP
}
// cpp_debug_wkb
void cpp_debug_wkb(List wkb);
RcppExport SEXP _wk_cpp_debug_wkb(SEXP wkbSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type wkb(wkbSEXP);
    cpp_debug_wkb(wkb);
    return R_NilValue;
END_RCPP
}
// cpp_debug_wkt
void cpp_debug_wkt(CharacterVector input);
RcppExport SEXP _wk_cpp_debug_wkt(SEXP inputSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type input(inputSEXP);
    cpp_debug_wkt(input);
    return R_NilValue;
END_RCPP
}
// cpp_debug_wkt_streamer
void cpp_debug_wkt_streamer(CharacterVector input);
RcppExport SEXP _wk_cpp_debug_wkt_streamer(SEXP inputSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type input(inputSEXP);
    cpp_debug_wkt_streamer(input);
    return R_NilValue;
END_RCPP
}
// cpp_debug_wksxp
void cpp_debug_wksxp(List input);
RcppExport SEXP _wk_cpp_debug_wksxp(SEXP inputSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type input(inputSEXP);
    cpp_debug_wksxp(input);
    return R_NilValue;
END_RCPP
}
// cpp_format_wkb
Rcpp::CharacterVector cpp_format_wkb(Rcpp::List wkb, int maxCoords);
RcppExport SEXP _wk_cpp_format_wkb(SEXP wkbSEXP, SEXP maxCoordsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkb(wkbSEXP);
    Rcpp::traits::input_parameter< int >::type maxCoords(maxCoordsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_format_wkb(wkb, maxCoords));
    return rcpp_result_gen;
END_RCPP
}
// cpp_format_wkt
Rcpp::CharacterVector cpp_format_wkt(CharacterVector wkt, int maxCoords);
RcppExport SEXP _wk_cpp_format_wkt(SEXP wktSEXP, SEXP maxCoordsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type wkt(wktSEXP);
    Rcpp::traits::input_parameter< int >::type maxCoords(maxCoordsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_format_wkt(wkt, maxCoords));
    return rcpp_result_gen;
END_RCPP
}
// cpp_format_wksxp
Rcpp::CharacterVector cpp_format_wksxp(List wksxp, int maxCoords);
RcppExport SEXP _wk_cpp_format_wksxp(SEXP wksxpSEXP, SEXP maxCoordsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type wksxp(wksxpSEXP);
    Rcpp::traits::input_parameter< int >::type maxCoords(maxCoordsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_format_wksxp(wksxp, maxCoords));
    return rcpp_result_gen;
END_RCPP
}
// cpp_meta_wkb
List cpp_meta_wkb(List wkb, bool recursive);
RcppExport SEXP _wk_cpp_meta_wkb(SEXP wkbSEXP, SEXP recursiveSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type wkb(wkbSEXP);
    Rcpp::traits::input_parameter< bool >::type recursive(recursiveSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_meta_wkb(wkb, recursive));
    return rcpp_result_gen;
END_RCPP
}
// cpp_meta_wkt
List cpp_meta_wkt(CharacterVector wkt, bool recursive);
RcppExport SEXP _wk_cpp_meta_wkt(SEXP wktSEXP, SEXP recursiveSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type wkt(wktSEXP);
    Rcpp::traits::input_parameter< bool >::type recursive(recursiveSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_meta_wkt(wkt, recursive));
    return rcpp_result_gen;
END_RCPP
}
// cpp_meta_wkt_streamer
List cpp_meta_wkt_streamer(CharacterVector wkt, bool recursive);
RcppExport SEXP _wk_cpp_meta_wkt_streamer(SEXP wktSEXP, SEXP recursiveSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type wkt(wktSEXP);
    Rcpp::traits::input_parameter< bool >::type recursive(recursiveSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_meta_wkt_streamer(wkt, recursive));
    return rcpp_result_gen;
END_RCPP
}
// cpp_meta_wksxp
List cpp_meta_wksxp(List wksxp, bool recursive);
RcppExport SEXP _wk_cpp_meta_wksxp(SEXP wksxpSEXP, SEXP recursiveSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type wksxp(wksxpSEXP);
    Rcpp::traits::input_parameter< bool >::type recursive(recursiveSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_meta_wksxp(wksxp, recursive));
    return rcpp_result_gen;
END_RCPP
}
// cpp_problems_wkb
Rcpp::CharacterVector cpp_problems_wkb(Rcpp::List wkb);
RcppExport SEXP _wk_cpp_problems_wkb(SEXP wkbSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkb(wkbSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_problems_wkb(wkb));
    return rcpp_result_gen;
END_RCPP
}
// cpp_problems_wkt
Rcpp::CharacterVector cpp_problems_wkt(CharacterVector wkt);
RcppExport SEXP _wk_cpp_problems_wkt(SEXP wktSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type wkt(wktSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_problems_wkt(wkt));
    return rcpp_result_gen;
END_RCPP
}
// cpp_problems_wksxp
Rcpp::CharacterVector cpp_problems_wksxp(List wksxp);
RcppExport SEXP _wk_cpp_problems_wksxp(SEXP wksxpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type wksxp(wksxpSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_problems_wksxp(wksxp));
    return rcpp_result_gen;
END_RCPP
}
// cpp_ranges_wkb
List cpp_ranges_wkb(List wkb, bool naRm, bool onlyFinite);
RcppExport SEXP _wk_cpp_ranges_wkb(SEXP wkbSEXP, SEXP naRmSEXP, SEXP onlyFiniteSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type wkb(wkbSEXP);
    Rcpp::traits::input_parameter< bool >::type naRm(naRmSEXP);
    Rcpp::traits::input_parameter< bool >::type onlyFinite(onlyFiniteSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_ranges_wkb(wkb, naRm, onlyFinite));
    return rcpp_result_gen;
END_RCPP
}
// cpp_ranges_wkt
List cpp_ranges_wkt(CharacterVector wkt, bool naRm, bool onlyFinite);
RcppExport SEXP _wk_cpp_ranges_wkt(SEXP wktSEXP, SEXP naRmSEXP, SEXP onlyFiniteSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type wkt(wktSEXP);
    Rcpp::traits::input_parameter< bool >::type naRm(naRmSEXP);
    Rcpp::traits::input_parameter< bool >::type onlyFinite(onlyFiniteSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_ranges_wkt(wkt, naRm, onlyFinite));
    return rcpp_result_gen;
END_RCPP
}
// cpp_ranges_wksxp
List cpp_ranges_wksxp(List wksxp, bool naRm, bool onlyFinite);
RcppExport SEXP _wk_cpp_ranges_wksxp(SEXP wksxpSEXP, SEXP naRmSEXP, SEXP onlyFiniteSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type wksxp(wksxpSEXP);
    Rcpp::traits::input_parameter< bool >::type naRm(naRmSEXP);
    Rcpp::traits::input_parameter< bool >::type onlyFinite(onlyFiniteSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_ranges_wksxp(wksxp, naRm, onlyFinite));
    return rcpp_result_gen;
END_RCPP
}
// cpp_feature_ranges_wkb
List cpp_feature_ranges_wkb(List wkb, bool naRm, bool onlyFinite);
RcppExport SEXP _wk_cpp_feature_ranges_wkb(SEXP wkbSEXP, SEXP naRmSEXP, SEXP onlyFiniteSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type wkb(wkbSEXP);
    Rcpp::traits::input_parameter< bool >::type naRm(naRmSEXP);
    Rcpp::traits::input_parameter< bool >::type onlyFinite(onlyFiniteSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_feature_ranges_wkb(wkb, naRm, onlyFinite));
    return rcpp_result_gen;
END_RCPP
}
// cpp_feature_ranges_wkt
List cpp_feature_ranges_wkt(CharacterVector wkt, bool naRm, bool onlyFinite);
RcppExport SEXP _wk_cpp_feature_ranges_wkt(SEXP wktSEXP, SEXP naRmSEXP, SEXP onlyFiniteSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type wkt(wktSEXP);
    Rcpp::traits::input_parameter< bool >::type naRm(naRmSEXP);
    Rcpp::traits::input_parameter< bool >::type onlyFinite(onlyFiniteSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_feature_ranges_wkt(wkt, naRm, onlyFinite));
    return rcpp_result_gen;
END_RCPP
}
// cpp_feature_ranges_wksxp
List cpp_feature_ranges_wksxp(List wksxp, bool naRm, bool onlyFinite);
RcppExport SEXP _wk_cpp_feature_ranges_wksxp(SEXP wksxpSEXP, SEXP naRmSEXP, SEXP onlyFiniteSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type wksxp(wksxpSEXP);
    Rcpp::traits::input_parameter< bool >::type naRm(naRmSEXP);
    Rcpp::traits::input_parameter< bool >::type onlyFinite(onlyFiniteSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_feature_ranges_wksxp(wksxp, naRm, onlyFinite));
    return rcpp_result_gen;
END_RCPP
}
// cpp_wkb_translate_wkt
Rcpp::CharacterVector cpp_wkb_translate_wkt(Rcpp::List wkb, int includeZ, int includeM, int includeSRID, int precision, bool trim);
RcppExport SEXP _wk_cpp_wkb_translate_wkt(SEXP wkbSEXP, SEXP includeZSEXP, SEXP includeMSEXP, SEXP includeSRIDSEXP, SEXP precisionSEXP, SEXP trimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkb(wkbSEXP);
    Rcpp::traits::input_parameter< int >::type includeZ(includeZSEXP);
    Rcpp::traits::input_parameter< int >::type includeM(includeMSEXP);
    Rcpp::traits::input_parameter< int >::type includeSRID(includeSRIDSEXP);
    Rcpp::traits::input_parameter< int >::type precision(precisionSEXP);
    Rcpp::traits::input_parameter< bool >::type trim(trimSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_wkb_translate_wkt(wkb, includeZ, includeM, includeSRID, precision, trim));
    return rcpp_result_gen;
END_RCPP
}
// cpp_wkb_translate_wkb
Rcpp::List cpp_wkb_translate_wkb(Rcpp::List wkb, int includeZ, int includeM, int includeSRID, int endian, int bufferSize);
RcppExport SEXP _wk_cpp_wkb_translate_wkb(SEXP wkbSEXP, SEXP includeZSEXP, SEXP includeMSEXP, SEXP includeSRIDSEXP, SEXP endianSEXP, SEXP bufferSizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkb(wkbSEXP);
    Rcpp::traits::input_parameter< int >::type includeZ(includeZSEXP);
    Rcpp::traits::input_parameter< int >::type includeM(includeMSEXP);
    Rcpp::traits::input_parameter< int >::type includeSRID(includeSRIDSEXP);
    Rcpp::traits::input_parameter< int >::type endian(endianSEXP);
    Rcpp::traits::input_parameter< int >::type bufferSize(bufferSizeSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_wkb_translate_wkb(wkb, includeZ, includeM, includeSRID, endian, bufferSize));
    return rcpp_result_gen;
END_RCPP
}
// cpp_wkb_translate_wksxp
Rcpp::List cpp_wkb_translate_wksxp(Rcpp::List wkb, int includeZ, int includeM, int includeSRID);
RcppExport SEXP _wk_cpp_wkb_translate_wksxp(SEXP wkbSEXP, SEXP includeZSEXP, SEXP includeMSEXP, SEXP includeSRIDSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkb(wkbSEXP);
    Rcpp::traits::input_parameter< int >::type includeZ(includeZSEXP);
    Rcpp::traits::input_parameter< int >::type includeM(includeMSEXP);
    Rcpp::traits::input_parameter< int >::type includeSRID(includeSRIDSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_wkb_translate_wksxp(wkb, includeZ, includeM, includeSRID));
    return rcpp_result_gen;
END_RCPP
}
// cpp_wkt_translate_wkt
CharacterVector cpp_wkt_translate_wkt(CharacterVector wkt, int includeZ, int includeM, int includeSRID, int precision, bool trim);
RcppExport SEXP _wk_cpp_wkt_translate_wkt(SEXP wktSEXP, SEXP includeZSEXP, SEXP includeMSEXP, SEXP includeSRIDSEXP, SEXP precisionSEXP, SEXP trimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type wkt(wktSEXP);
    Rcpp::traits::input_parameter< int >::type includeZ(includeZSEXP);
    Rcpp::traits::input_parameter< int >::type includeM(includeMSEXP);
    Rcpp::traits::input_parameter< int >::type includeSRID(includeSRIDSEXP);
    Rcpp::traits::input_parameter< int >::type precision(precisionSEXP);
    Rcpp::traits::input_parameter< bool >::type trim(trimSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_wkt_translate_wkt(wkt, includeZ, includeM, includeSRID, precision, trim));
    return rcpp_result_gen;
END_RCPP
}
// cpp_wkt_translate_wkb
Rcpp::List cpp_wkt_translate_wkb(CharacterVector wkt, int includeZ, int includeM, int includeSRID, int endian, int bufferSize);
RcppExport SEXP _wk_cpp_wkt_translate_wkb(SEXP wktSEXP, SEXP includeZSEXP, SEXP includeMSEXP, SEXP includeSRIDSEXP, SEXP endianSEXP, SEXP bufferSizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type wkt(wktSEXP);
    Rcpp::traits::input_parameter< int >::type includeZ(includeZSEXP);
    Rcpp::traits::input_parameter< int >::type includeM(includeMSEXP);
    Rcpp::traits::input_parameter< int >::type includeSRID(includeSRIDSEXP);
    Rcpp::traits::input_parameter< int >::type endian(endianSEXP);
    Rcpp::traits::input_parameter< int >::type bufferSize(bufferSizeSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_wkt_translate_wkb(wkt, includeZ, includeM, includeSRID, endian, bufferSize));
    return rcpp_result_gen;
END_RCPP
}
// cpp_wkt_translate_wksxp
Rcpp::List cpp_wkt_translate_wksxp(CharacterVector wkt, int includeZ, int includeM, int includeSRID);
RcppExport SEXP _wk_cpp_wkt_translate_wksxp(SEXP wktSEXP, SEXP includeZSEXP, SEXP includeMSEXP, SEXP includeSRIDSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type wkt(wktSEXP);
    Rcpp::traits::input_parameter< int >::type includeZ(includeZSEXP);
    Rcpp::traits::input_parameter< int >::type includeM(includeMSEXP);
    Rcpp::traits::input_parameter< int >::type includeSRID(includeSRIDSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_wkt_translate_wksxp(wkt, includeZ, includeM, includeSRID));
    return rcpp_result_gen;
END_RCPP
}
// cpp_wksxp_translate_wkt
CharacterVector cpp_wksxp_translate_wkt(List wksexp, int includeZ, int includeM, int includeSRID, int precision, bool trim);
RcppExport SEXP _wk_cpp_wksxp_translate_wkt(SEXP wksexpSEXP, SEXP includeZSEXP, SEXP includeMSEXP, SEXP includeSRIDSEXP, SEXP precisionSEXP, SEXP trimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type wksexp(wksexpSEXP);
    Rcpp::traits::input_parameter< int >::type includeZ(includeZSEXP);
    Rcpp::traits::input_parameter< int >::type includeM(includeMSEXP);
    Rcpp::traits::input_parameter< int >::type includeSRID(includeSRIDSEXP);
    Rcpp::traits::input_parameter< int >::type precision(precisionSEXP);
    Rcpp::traits::input_parameter< bool >::type trim(trimSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_wksxp_translate_wkt(wksexp, includeZ, includeM, includeSRID, precision, trim));
    return rcpp_result_gen;
END_RCPP
}
// cpp_wksxp_translate_wkb
List cpp_wksxp_translate_wkb(List wksexp, int includeZ, int includeM, int includeSRID, int endian, int bufferSize);
RcppExport SEXP _wk_cpp_wksxp_translate_wkb(SEXP wksexpSEXP, SEXP includeZSEXP, SEXP includeMSEXP, SEXP includeSRIDSEXP, SEXP endianSEXP, SEXP bufferSizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type wksexp(wksexpSEXP);
    Rcpp::traits::input_parameter< int >::type includeZ(includeZSEXP);
    Rcpp::traits::input_parameter< int >::type includeM(includeMSEXP);
    Rcpp::traits::input_parameter< int >::type includeSRID(includeSRIDSEXP);
    Rcpp::traits::input_parameter< int >::type endian(endianSEXP);
    Rcpp::traits::input_parameter< int >::type bufferSize(bufferSizeSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_wksxp_translate_wkb(wksexp, includeZ, includeM, includeSRID, endian, bufferSize));
    return rcpp_result_gen;
END_RCPP
}
// cpp_wksxp_translate_wksxp
List cpp_wksxp_translate_wksxp(List wksexp, int includeZ, int includeM, int includeSRID);
RcppExport SEXP _wk_cpp_wksxp_translate_wksxp(SEXP wksexpSEXP, SEXP includeZSEXP, SEXP includeMSEXP, SEXP includeSRIDSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type wksexp(wksexpSEXP);
    Rcpp::traits::input_parameter< int >::type includeZ(includeZSEXP);
    Rcpp::traits::input_parameter< int >::type includeM(includeMSEXP);
    Rcpp::traits::input_parameter< int >::type includeSRID(includeSRIDSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_wksxp_translate_wksxp(wksexp, includeZ, includeM, includeSRID));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_wk_cpp_coords_point_translate_wkt", (DL_FUNC) &_wk_cpp_coords_point_translate_wkt, 6},
    {"_wk_cpp_coords_wkb", (DL_FUNC) &_wk_cpp_coords_wkb, 2},
    {"_wk_cpp_coords_wkt", (DL_FUNC) &_wk_cpp_coords_wkt, 2},
    {"_wk_cpp_coords_wksxp", (DL_FUNC) &_wk_cpp_coords_wksxp, 2},
    {"_wk_cpp_debug_wkb", (DL_FUNC) &_wk_cpp_debug_wkb, 1},
    {"_wk_cpp_debug_wkt", (DL_FUNC) &_wk_cpp_debug_wkt, 1},
    {"_wk_cpp_debug_wkt_streamer", (DL_FUNC) &_wk_cpp_debug_wkt_streamer, 1},
    {"_wk_cpp_debug_wksxp", (DL_FUNC) &_wk_cpp_debug_wksxp, 1},
    {"_wk_cpp_format_wkb", (DL_FUNC) &_wk_cpp_format_wkb, 2},
    {"_wk_cpp_format_wkt", (DL_FUNC) &_wk_cpp_format_wkt, 2},
    {"_wk_cpp_format_wksxp", (DL_FUNC) &_wk_cpp_format_wksxp, 2},
    {"_wk_cpp_meta_wkb", (DL_FUNC) &_wk_cpp_meta_wkb, 2},
    {"_wk_cpp_meta_wkt", (DL_FUNC) &_wk_cpp_meta_wkt, 2},
    {"_wk_cpp_meta_wkt_streamer", (DL_FUNC) &_wk_cpp_meta_wkt_streamer, 2},
    {"_wk_cpp_meta_wksxp", (DL_FUNC) &_wk_cpp_meta_wksxp, 2},
    {"_wk_cpp_problems_wkb", (DL_FUNC) &_wk_cpp_problems_wkb, 1},
    {"_wk_cpp_problems_wkt", (DL_FUNC) &_wk_cpp_problems_wkt, 1},
    {"_wk_cpp_problems_wksxp", (DL_FUNC) &_wk_cpp_problems_wksxp, 1},
    {"_wk_cpp_ranges_wkb", (DL_FUNC) &_wk_cpp_ranges_wkb, 3},
    {"_wk_cpp_ranges_wkt", (DL_FUNC) &_wk_cpp_ranges_wkt, 3},
    {"_wk_cpp_ranges_wksxp", (DL_FUNC) &_wk_cpp_ranges_wksxp, 3},
    {"_wk_cpp_feature_ranges_wkb", (DL_FUNC) &_wk_cpp_feature_ranges_wkb, 3},
    {"_wk_cpp_feature_ranges_wkt", (DL_FUNC) &_wk_cpp_feature_ranges_wkt, 3},
    {"_wk_cpp_feature_ranges_wksxp", (DL_FUNC) &_wk_cpp_feature_ranges_wksxp, 3},
    {"_wk_cpp_wkb_translate_wkt", (DL_FUNC) &_wk_cpp_wkb_translate_wkt, 6},
    {"_wk_cpp_wkb_translate_wkb", (DL_FUNC) &_wk_cpp_wkb_translate_wkb, 6},
    {"_wk_cpp_wkb_translate_wksxp", (DL_FUNC) &_wk_cpp_wkb_translate_wksxp, 4},
    {"_wk_cpp_wkt_translate_wkt", (DL_FUNC) &_wk_cpp_wkt_translate_wkt, 6},
    {"_wk_cpp_wkt_translate_wkb", (DL_FUNC) &_wk_cpp_wkt_translate_wkb, 6},
    {"_wk_cpp_wkt_translate_wksxp", (DL_FUNC) &_wk_cpp_wkt_translate_wksxp, 4},
    {"_wk_cpp_wksxp_translate_wkt", (DL_FUNC) &_wk_cpp_wksxp_translate_wkt, 6},
    {"_wk_cpp_wksxp_translate_wkb", (DL_FUNC) &_wk_cpp_wksxp_translate_wkb, 6},
    {"_wk_cpp_wksxp_translate_wksxp", (DL_FUNC) &_wk_cpp_wksxp_translate_wksxp, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_wk(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
