% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/utils.R
\name{join_count_and_design}
\alias{join_count_and_design}
\title{A function to join a count table and a design table.}
\usage{
join_count_and_design(sgcount, df_design)
}
\arguments{
\item{sgcount}{The input matrix contains read counts of sgRNAs for each sample.}

\item{df_design}{The table contains a study design.}
}
\value{
A tall-thin and combined table of the sgRNA read counts and study design will be returned.
}
\description{
A function to join a count table and a design table.
}
\examples{
library(CB2)
data(Evers_CRISPRn_RT112) 
head(join_count_and_design(Evers_CRISPRn_RT112$count, Evers_CRISPRn_RT112$design))

}
