// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// quant
Rcpp::List quant(std::string ref_path, std::vector<std::string> fastq_path, std::vector<bool> is_gzipped, bool verbose);
RcppExport SEXP _CB2_quant(SEXP ref_pathSEXP, SEXP fastq_pathSEXP, SEXP is_gzippedSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type ref_path(ref_pathSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type fastq_path(fastq_pathSEXP);
    Rcpp::traits::input_parameter< std::vector<bool> >::type is_gzipped(is_gzippedSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(quant(ref_path, fastq_path, is_gzipped, verbose));
    return rcpp_result_gen;
END_RCPP
}
// fit_ab
Rcpp::List fit_ab(const arma::mat& xvec, const arma::mat& nvec);
RcppExport SEXP _CB2_fit_ab(SEXP xvecSEXP, SEXP nvecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type xvec(xvecSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type nvec(nvecSEXP);
    rcpp_result_gen = Rcpp::wrap(fit_ab(xvec, nvec));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_CB2_quant", (DL_FUNC) &_CB2_quant, 4},
    {"_CB2_fit_ab", (DL_FUNC) &_CB2_fit_ab, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_CB2(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
