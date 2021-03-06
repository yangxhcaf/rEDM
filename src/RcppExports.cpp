// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// compute_stats
DataFrame compute_stats(std::vector<double> observed, std::vector<double> predicted);
RcppExport SEXP _rEDM_compute_stats(SEXP observedSEXP, SEXP predictedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type observed(observedSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type predicted(predictedSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_stats(observed, predicted));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP _rcpp_module_boot_block_lnlp_module();
RcppExport SEXP _rcpp_module_boot_lnlp_module();
RcppExport SEXP _rcpp_module_boot_xmap_module();

static const R_CallMethodDef CallEntries[] = {
    {"_rEDM_compute_stats", (DL_FUNC) &_rEDM_compute_stats, 2},
    {"_rcpp_module_boot_block_lnlp_module", (DL_FUNC) &_rcpp_module_boot_block_lnlp_module, 0},
    {"_rcpp_module_boot_lnlp_module", (DL_FUNC) &_rcpp_module_boot_lnlp_module, 0},
    {"_rcpp_module_boot_xmap_module", (DL_FUNC) &_rcpp_module_boot_xmap_module, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_rEDM(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
