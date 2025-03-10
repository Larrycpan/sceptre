% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/import_functs.R
\name{import_data_from_cellranger}
\alias{import_data_from_cellranger}
\title{Import data from cellranger}
\usage{
import_data_from_cellranger(
  directories,
  moi,
  grna_target_data_frame,
  extra_covariates = data.frame()
)
}
\arguments{
\item{directories}{a character vector of directories containing the output of one or more calls to cellranger count. Each directory should contain the files "matrix.mtx.gz" and "features.tsv.gz" (and optionally "barcodes.tsv.gz").}

\item{moi}{a string indicating the MOI of the dataset, either "low" or "high"}

\item{grna_target_data_frame}{a data frame containing columns \code{grna_id} and \code{grna_target} mapping each individual gRNA to its target}

\item{extra_covariates}{(optional) a data frame containing extra covariates (e.g., batch, biological replicate) beyond those that \code{sceptre} can compute}
}
\value{
an initialized \code{sceptre_object}
}
\description{
\code{import_data_from_cellranger()} imports data from the output of one or more calls to cellranger count. See \href{https://timothy-barry.github.io/sceptre-book/sceptre.html#sec-whole_game_import_data}{Section 1 of the introductory chapter in the manual} for more information about this function.
}
\examples{
\dontrun{
# 1. point to directories containing cellranger output
directories <- paste0(system.file("extdata", package = "sceptre"),
                     "/highmoi_example/gem_group_", 1:2)

# 2. simulate an additional covariate
cell_type <- sample(x = paste0("type_", 1:3),
                    size = 45919, replace = TRUE) |> factor()
extra_covariates <- data.frame(cell_type = cell_type)

# 3. initialize the sceptre_object
data(grna_target_data_frame_highmoi)
sceptre_object <- import_data_from_cellranger(
  directories = directories,
  moi = "high",
  grna_target_data_frame = grna_target_data_frame_highmoi,
  extra_covariates = extra_covariates
)
}
}
