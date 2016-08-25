// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// fillhexa
DataFrame fillhexa(DataFrame hex, double res);
RcppExport SEXP recexcavAAR_fillhexa(SEXP hexSEXP, SEXP resSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< DataFrame >::type hex(hexSEXP);
    Rcpp::traits::input_parameter< double >::type res(resSEXP);
    __result = Rcpp::wrap(fillhexa(hex, res));
    return __result;
END_RCPP
}
// posdec
DataFrame posdec(DataFrame crlist, List maplist);
RcppExport SEXP recexcavAAR_posdec(SEXP crlistSEXP, SEXP maplistSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< DataFrame >::type crlist(crlistSEXP);
    Rcpp::traits::input_parameter< List >::type maplist(maplistSEXP);
    __result = Rcpp::wrap(posdec(crlist, maplist));
    return __result;
END_RCPP
}
// posdeclist
List posdeclist(List crlist, List maplist);
RcppExport SEXP recexcavAAR_posdeclist(SEXP crlistSEXP, SEXP maplistSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type crlist(crlistSEXP);
    Rcpp::traits::input_parameter< List >::type maplist(maplistSEXP);
    __result = Rcpp::wrap(posdeclist(crlist, maplist));
    return __result;
END_RCPP
}
// spatiallong2
DataFrame spatiallong2(NumericVector x, NumericVector y, NumericMatrix z);
RcppExport SEXP recexcavAAR_spatiallong2(SEXP xSEXP, SEXP ySEXP, SEXP zSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type z(zSEXP);
    __result = Rcpp::wrap(spatiallong2(x, y, z));
    return __result;
END_RCPP
}
// spatialwide2
List spatialwide2(NumericVector x, NumericVector y, NumericVector z, int digits);
RcppExport SEXP recexcavAAR_spatialwide2(SEXP xSEXP, SEXP ySEXP, SEXP zSEXP, SEXP digitsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type z(zSEXP);
    Rcpp::traits::input_parameter< int >::type digits(digitsSEXP);
    __result = Rcpp::wrap(spatialwide2(x, y, z, digits));
    return __result;
END_RCPP
}
// spitcenter
NumericVector spitcenter(DataFrame hex);
RcppExport SEXP recexcavAAR_spitcenter(SEXP hexSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< DataFrame >::type hex(hexSEXP);
    __result = Rcpp::wrap(spitcenter(hex));
    return __result;
END_RCPP
}
// spitcenternat
DataFrame spitcenternat(DataFrame hex, List maplist);
RcppExport SEXP recexcavAAR_spitcenternat(SEXP hexSEXP, SEXP maplistSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< DataFrame >::type hex(hexSEXP);
    Rcpp::traits::input_parameter< List >::type maplist(maplistSEXP);
    __result = Rcpp::wrap(spitcenternat(hex, maplist));
    return __result;
END_RCPP
}
// spitcenternatlist
List spitcenternatlist(List hexlist, List maplist);
RcppExport SEXP recexcavAAR_spitcenternatlist(SEXP hexlistSEXP, SEXP maplistSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type hexlist(hexlistSEXP);
    Rcpp::traits::input_parameter< List >::type maplist(maplistSEXP);
    __result = Rcpp::wrap(spitcenternatlist(hexlist, maplist));
    return __result;
END_RCPP
}
