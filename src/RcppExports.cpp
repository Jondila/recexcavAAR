// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// draw_circle
DataFrame draw_circle(double centerx, double centery, double centerz, double radius, int resolution);
RcppExport SEXP recexcavAAR_draw_circle(SEXP centerxSEXP, SEXP centerySEXP, SEXP centerzSEXP, SEXP radiusSEXP, SEXP resolutionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type centerx(centerxSEXP);
    Rcpp::traits::input_parameter< double >::type centery(centerySEXP);
    Rcpp::traits::input_parameter< double >::type centerz(centerzSEXP);
    Rcpp::traits::input_parameter< double >::type radius(radiusSEXP);
    Rcpp::traits::input_parameter< int >::type resolution(resolutionSEXP);
    rcpp_result_gen = Rcpp::wrap(draw_circle(centerx, centery, centerz, radius, resolution));
    return rcpp_result_gen;
END_RCPP
}
// rotate
DataFrame rotate(NumericVector x, NumericVector y, NumericVector z, double degrx, double degry, double degrz, double pivotx, double pivoty, double pivotz);
RcppExport SEXP recexcavAAR_rotate(SEXP xSEXP, SEXP ySEXP, SEXP zSEXP, SEXP degrxSEXP, SEXP degrySEXP, SEXP degrzSEXP, SEXP pivotxSEXP, SEXP pivotySEXP, SEXP pivotzSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type z(zSEXP);
    Rcpp::traits::input_parameter< double >::type degrx(degrxSEXP);
    Rcpp::traits::input_parameter< double >::type degry(degrySEXP);
    Rcpp::traits::input_parameter< double >::type degrz(degrzSEXP);
    Rcpp::traits::input_parameter< double >::type pivotx(pivotxSEXP);
    Rcpp::traits::input_parameter< double >::type pivoty(pivotySEXP);
    Rcpp::traits::input_parameter< double >::type pivotz(pivotzSEXP);
    rcpp_result_gen = Rcpp::wrap(rotate(x, y, z, degrx, degry, degrz, pivotx, pivoty, pivotz));
    return rcpp_result_gen;
END_RCPP
}
// draw_sphere
DataFrame draw_sphere(double centerx, double centery, double centerz, double radius, int phires, int thetares);
RcppExport SEXP recexcavAAR_draw_sphere(SEXP centerxSEXP, SEXP centerySEXP, SEXP centerzSEXP, SEXP radiusSEXP, SEXP phiresSEXP, SEXP thetaresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type centerx(centerxSEXP);
    Rcpp::traits::input_parameter< double >::type centery(centerySEXP);
    Rcpp::traits::input_parameter< double >::type centerz(centerzSEXP);
    Rcpp::traits::input_parameter< double >::type radius(radiusSEXP);
    Rcpp::traits::input_parameter< int >::type phires(phiresSEXP);
    Rcpp::traits::input_parameter< int >::type thetares(thetaresSEXP);
    rcpp_result_gen = Rcpp::wrap(draw_sphere(centerx, centery, centerz, radius, phires, thetares));
    return rcpp_result_gen;
END_RCPP
}
// rescale
DataFrame rescale(NumericVector x, NumericVector y, NumericVector z, double scalex, double scaley, double scalez);
RcppExport SEXP recexcavAAR_rescale(SEXP xSEXP, SEXP ySEXP, SEXP zSEXP, SEXP scalexSEXP, SEXP scaleySEXP, SEXP scalezSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type z(zSEXP);
    Rcpp::traits::input_parameter< double >::type scalex(scalexSEXP);
    Rcpp::traits::input_parameter< double >::type scaley(scaleySEXP);
    Rcpp::traits::input_parameter< double >::type scalez(scalezSEXP);
    rcpp_result_gen = Rcpp::wrap(rescale(x, y, z, scalex, scaley, scalez));
    return rcpp_result_gen;
END_RCPP
}
// fillhexa
DataFrame fillhexa(DataFrame hex, double res);
RcppExport SEXP recexcavAAR_fillhexa(SEXP hexSEXP, SEXP resSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type hex(hexSEXP);
    Rcpp::traits::input_parameter< double >::type res(resSEXP);
    rcpp_result_gen = Rcpp::wrap(fillhexa(hex, res));
    return rcpp_result_gen;
END_RCPP
}
// pnp
bool pnp(NumericVector vertx, NumericVector verty, float testx, float testy);
RcppExport SEXP recexcavAAR_pnp(SEXP vertxSEXP, SEXP vertySEXP, SEXP testxSEXP, SEXP testySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type vertx(vertxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type verty(vertySEXP);
    Rcpp::traits::input_parameter< float >::type testx(testxSEXP);
    Rcpp::traits::input_parameter< float >::type testy(testySEXP);
    rcpp_result_gen = Rcpp::wrap(pnp(vertx, verty, testx, testy));
    return rcpp_result_gen;
END_RCPP
}
// pnpmulti
LogicalVector pnpmulti(NumericVector vertx, NumericVector verty, NumericVector testx, NumericVector testy);
RcppExport SEXP recexcavAAR_pnpmulti(SEXP vertxSEXP, SEXP vertySEXP, SEXP testxSEXP, SEXP testySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type vertx(vertxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type verty(vertySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type testx(testxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type testy(testySEXP);
    rcpp_result_gen = Rcpp::wrap(pnpmulti(vertx, verty, testx, testy));
    return rcpp_result_gen;
END_RCPP
}
// posdec
DataFrame posdec(DataFrame crdf, List maplist);
RcppExport SEXP recexcavAAR_posdec(SEXP crdfSEXP, SEXP maplistSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type crdf(crdfSEXP);
    Rcpp::traits::input_parameter< List >::type maplist(maplistSEXP);
    rcpp_result_gen = Rcpp::wrap(posdec(crdf, maplist));
    return rcpp_result_gen;
END_RCPP
}
// posdeclist
List posdeclist(List crdflist, List maplist);
RcppExport SEXP recexcavAAR_posdeclist(SEXP crdflistSEXP, SEXP maplistSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type crdflist(crdflistSEXP);
    Rcpp::traits::input_parameter< List >::type maplist(maplistSEXP);
    rcpp_result_gen = Rcpp::wrap(posdeclist(crdflist, maplist));
    return rcpp_result_gen;
END_RCPP
}
// spatiallong
DataFrame spatiallong(NumericVector x, NumericVector y, NumericMatrix z);
RcppExport SEXP recexcavAAR_spatiallong(SEXP xSEXP, SEXP ySEXP, SEXP zSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type z(zSEXP);
    rcpp_result_gen = Rcpp::wrap(spatiallong(x, y, z));
    return rcpp_result_gen;
END_RCPP
}
// spatialwide
List spatialwide(NumericVector x, NumericVector y, NumericVector z, int digits);
RcppExport SEXP recexcavAAR_spatialwide(SEXP xSEXP, SEXP ySEXP, SEXP zSEXP, SEXP digitsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type z(zSEXP);
    Rcpp::traits::input_parameter< int >::type digits(digitsSEXP);
    rcpp_result_gen = Rcpp::wrap(spatialwide(x, y, z, digits));
    return rcpp_result_gen;
END_RCPP
}
// spitcenter
NumericVector spitcenter(DataFrame hex);
RcppExport SEXP recexcavAAR_spitcenter(SEXP hexSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type hex(hexSEXP);
    rcpp_result_gen = Rcpp::wrap(spitcenter(hex));
    return rcpp_result_gen;
END_RCPP
}
// spitcenternat
DataFrame spitcenternat(DataFrame hex, List maplist);
RcppExport SEXP recexcavAAR_spitcenternat(SEXP hexSEXP, SEXP maplistSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type hex(hexSEXP);
    Rcpp::traits::input_parameter< List >::type maplist(maplistSEXP);
    rcpp_result_gen = Rcpp::wrap(spitcenternat(hex, maplist));
    return rcpp_result_gen;
END_RCPP
}
// spitcenternatlist
List spitcenternatlist(List hexlist, List maplist);
RcppExport SEXP recexcavAAR_spitcenternatlist(SEXP hexlistSEXP, SEXP maplistSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type hexlist(hexlistSEXP);
    Rcpp::traits::input_parameter< List >::type maplist(maplistSEXP);
    rcpp_result_gen = Rcpp::wrap(spitcenternatlist(hexlist, maplist));
    return rcpp_result_gen;
END_RCPP
}
