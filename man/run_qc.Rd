% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/s4_analysis_functs_1.R
\name{run_qc}
\alias{run_qc}
\title{Run QC}
\usage{
run_qc(
  sceptre_object,
  n_nonzero_trt_thresh = 7L,
  n_nonzero_cntrl_thresh = 7L,
  response_n_umis_range = c(0.01, 0.99),
  response_n_nonzero_range = c(0.01, 0.99),
  p_mito_threshold = 0.2,
  additional_cells_to_remove = integer()
)
}
\arguments{
\item{sceptre_object}{a \code{sceptre_object}}

\item{n_nonzero_trt_thresh}{(optional; default \code{7L}) an integer specifying the number of nonzero treatment cells a pair must contain for it to be retained}

\item{n_nonzero_cntrl_thresh}{(optional; default \code{7L}) an integer specifying the number of nonzero control cells a pair must contain for it to be retained}

\item{response_n_umis_range}{(optional; default \code{c(0.01, 0.99)}) a length-two vector of percentiles specifying the location at which to clip the left and right tails of the \code{response_n_umis} distribution}

\item{response_n_nonzero_range}{(optional; default \code{c(0.01, 0.99)}) a length-two vector of percentiles specifying the location at which to clip the left and right tails of the \code{response_n_nonzero} distribution}

\item{p_mito_threshold}{(optional; default \code{0.2}) a numeric value specifying the location at which to clip the right tail of the \code{response_p_mito} distribution}

\item{additional_cells_to_remove}{(optional) a vector of integer indices specifying additional cells to remove}
}
\value{
an updated \code{sceptre_object} in which QC has been carried out
}
\description{
\code{run_qc()} runs cellwise and pairwise QC on the data. See \href{https://timothy-barry.github.io/sceptre-book/run-qc.html}{Chapter 4 of the manual} for detailed information about this function.
}
\examples{
# see example via ?sceptre
}
