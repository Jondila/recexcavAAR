#include <Rcpp.h>
#include <cstdlib>
#include <iostream>
#include <math.h>
#include "helpfunc.h"

using namespace Rcpp;

//get mean z value of the four horizontally closest points to a point on a surface
double refz(double x1, double y1, NumericMatrix curmap) {
  // find maxdist of current layer (purpose: see below)
  NumericVector xcl = curmap(_, 0);
  NumericVector ycl = curmap(_, 1);
  double maxdist = pyth(minv(xcl), minv(ycl), maxv(xcl), maxv(ycl));
  // create vectors for individual point distances
  // (horizontal -> mindistps and vertical -> mindistz)
  NumericVector mindistps(4);
  NumericVector mindistz(4);
  for (int p1 = 0; p1 < curmap.nrow(); p1++) {
    // get horizontal coordinates of the current single point of the layer -> x2, y2
    double x2 = curmap(p1, 0);
    double y2 = curmap(p1, 1);
    // calculate horizontal euclidian distance of single point of interest and single point of layer
    // -> dist
    double dist = pyth(x1, y1, x2, y2);
    // at the beginning: set minimum distance value for all four closest points to maxdist - this value
    // will be adjusted step by step
    if (p1 == 0) {
      mindistps(0) = maxdist;
      mindistps(1) = maxdist;
      mindistps(2) = maxdist;
      mindistps(3) = maxdist;
    }
    int id = maxid(mindistps);
    // if the current point of layer has a smaller distance to the current point of interest, then
    // replace the biggest value in vector mindistps by new smaller value (if so) and also store z value
    // of the current single point of layer
    if (dist <= mindistps(id)) {
      mindistps(id) = dist;
      mindistz(id) = curmap(p1, 2);
    }
  }
  double ztop = mean(mindistz);

  return (ztop);
}

//' center determination for hexahedrons
//'
//' \code{spitcenter} determines a center point for an input hexahedron
//'
//' @param hex dataframe with three columns and eight rows to define a hexahedron by its corner
//' point coordinates
//'
//' @return numeric vector with the spatial coordinates of the center point of the input hexahedron
//'
//' @examples
//' hexatestdf <- data.frame(
//'   x = c(0,1,0,4,5,5,5,5),
//'   y = c(1,1,4,4,1,1,4,4),
//'   z = c(4,8,4,9,4,8,4,6)
//' )
//'
//' center <- spitcenter(hexatestdf)
//'
//' #library(rgl)
//' #plot3d(
//' # hexatestdf$x, hexatestdf$y, hexatestdf$z,
//' # type = "p",
//' # xlab = "x", ylab = "y", zlab = "z"
//' #)
//' #plot3d(
//' #  center[1], center[2], center[3],
//' #  type = "p",
//' #  col = "red",
//' #  add = TRUE
//' #)
//'
//' @export
// [[Rcpp::export]]
NumericVector spitcenter(DataFrame hex){

  Function asMatrix("as.matrix");

  SEXP hex2mid = hex;
  NumericMatrix hexa = asMatrix(hex2mid);

  NumericVector geometriccenter = NumericVector::create(
    _["x"] = mean(hexa(_, 0)),
    _["y"] = mean(hexa(_, 1)),
    _["z"] = mean(hexa(_, 2))
  );

  return geometriccenter;
}

//' spitcenternat
//'
//' \code{spitcenter2} test
//'
//' @param hex test
//' @param maplist test
//'
//' @return test
//'
//'
//' @export
// [[Rcpp::export]]
DataFrame spitcenternat(DataFrame hex, List maplist){

  Function asMatrix("as.matrix");

  SEXP hex2mid = hex;
  NumericMatrix hexa = asMatrix(hex2mid);

  // get horizontal coordinates of current spit -> x1, y1
  double curxmean = mean(hexa(_, 0));
  double curymean = mean(hexa(_, 1));

  double meanz;

  NumericMatrix respoints(maplist.size() - 1, 3);

  for (int mp = 0; mp < (maplist.size() - 1); mp++) {
    // select matrix with points of the current and the next layer -> curmaptop, curmapbottom
    SEXP curmapmidtop = maplist(mp);
    SEXP curmapmidbottom = maplist(mp + 1);
    NumericMatrix curmaptop = asMatrix(curmapmidtop);
    NumericMatrix curmapbottom = asMatrix(curmapmidbottom);

    NumericVector zvs(2);
    zvs(0) = refz(curxmean, curymean, curmaptop);
    zvs(1) = refz(curxmean, curymean, curmapbottom);

    respoints(mp, 0) = curxmean;
    respoints(mp, 1) = curymean;
    respoints(mp, 2) = mean(zvs);

  }

  NumericVector x = respoints(_,0);
  NumericVector y = respoints(_,1);
  NumericVector z = respoints(_,2);

  // output
  return DataFrame::create(_["x"] = x, _["y"] = y, _["z"] = z);
}