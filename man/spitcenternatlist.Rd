% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{spitcenternatlist}
\alias{spitcenternatlist}
\title{Center determination for rectangles whose tops and bottoms are defined by irregular
surfaces (3D) for multiple data.frames in a list}
\usage{
spitcenternatlist(hexlist, maplist)
}
\arguments{
\item{hexlist}{list of data.frames with the 2D corners of the rectangles}

\item{maplist}{list of data.frames which contain the points that make up the surfaces}
}
\value{
list of data.frames with the spatial coordinates of the center points
}
\description{
\code{spitcenternatlist} works as \code{\link{spitcenternat}} but not just for a
single data.frame but for a list of data.frames
}
\examples{
df1 <- data.frame(
x = c(rep(0, 6), seq(0.2, 2.8, 0.2), seq(0.2, 2.8, 0.2), rep(3,6)),
  y = c(seq(0, 1, 0.2), rep(0, 14), rep(1, 14), seq(0, 1, 0.2)),
  z = c(0.9+0.05*rnorm(6), 0.9+0.05*rnorm(14), 1.3+0.05*rnorm(14), 1.2+0.05*rnorm(6))
)

df2 <- data.frame(
    x = c(rep(0, 6), seq(0.2, 2.8, 0.2), seq(0.2, 2.8, 0.2), rep(3,6)),
    y = c(seq(0, 1, 0.2), rep(0, 14), rep(1, 14), seq(0, 1, 0.2)),
    z = c(0.6+0.05*rnorm(6), 0.6+0.05*rnorm(14), 1.0+0.05*rnorm(14), 0.9+0.05*rnorm(6))
)

df3 <- data.frame(
    x = c(rep(0, 6), seq(0.2, 2.8, 0.2), seq(0.2, 2.8, 0.2), rep(3,6)),
    y = c(seq(0, 1, 0.2), rep(0, 14), rep(1, 14), seq(0, 1, 0.2)),
    z = c(0.3+0.05*rnorm(6), 0.3+0.05*rnorm(14), 0.7+0.05*rnorm(14), 0.6+0.05*rnorm(6))
)

lpoints <- list(df1, df2, df3)

maps <- kriglist(lpoints, lags = 3, model = "spherical")

hexatestdf1 <- data.frame(
  x = c(1, 1, 1, 1, 2, 2, 2, 2),
  y = c(0, 1, 0, 1, 0, 1, 0, 1)
)

hexatestdf2 <- data.frame(
  x = c(0, 0, 0, 0, 1, 1, 1, 1),
  y = c(0, 1, 0, 1, 0, 1, 0, 1)
)

hexs <- list(hexatestdf1, hexatestdf2)

spitcenternatlist(hexs, maps)

}
\seealso{
Other centerdetfuncs: \code{\link{spitcenternat}},
  \code{\link{spitcenter}}
}
