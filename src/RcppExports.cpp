// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// synth_idx_list_to_matrix
IntegerVector synth_idx_list_to_matrix(SEXP synthetic_idx_ptr);
RcppExport SEXP _sceptre_synth_idx_list_to_matrix(SEXP synthetic_idx_ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type synthetic_idx_ptr(synthetic_idx_ptrSEXP);
    rcpp_result_gen = Rcpp::wrap(synth_idx_list_to_matrix(synthetic_idx_ptr));
    return rcpp_result_gen;
END_RCPP
}
// synth_idx_list_to_r_list
List synth_idx_list_to_r_list(SEXP synthetic_idx_ptr);
RcppExport SEXP _sceptre_synth_idx_list_to_r_list(SEXP synthetic_idx_ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type synthetic_idx_ptr(synthetic_idx_ptrSEXP);
    rcpp_result_gen = Rcpp::wrap(synth_idx_list_to_r_list(synthetic_idx_ptr));
    return rcpp_result_gen;
END_RCPP
}
// print_synth_idx_list_row
void print_synth_idx_list_row(SEXP synthetic_idx_ptr, int idx);
RcppExport SEXP _sceptre_print_synth_idx_list_row(SEXP synthetic_idx_ptrSEXP, SEXP idxSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type synthetic_idx_ptr(synthetic_idx_ptrSEXP);
    Rcpp::traits::input_parameter< int >::type idx(idxSEXP);
    print_synth_idx_list_row(synthetic_idx_ptr, idx);
    return R_NilValue;
END_RCPP
}
// estimate_theta
List estimate_theta(NumericVector y, NumericVector mu, double dfr, int limit, double eps);
RcppExport SEXP _sceptre_estimate_theta(SEXP ySEXP, SEXP muSEXP, SEXP dfrSEXP, SEXP limitSEXP, SEXP epsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type dfr(dfrSEXP);
    Rcpp::traits::input_parameter< int >::type limit(limitSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    rcpp_result_gen = Rcpp::wrap(estimate_theta(y, mu, dfr, limit, eps));
    return rcpp_result_gen;
END_RCPP
}
// fisher_yates_samlper
SEXP fisher_yates_samlper(int n_tot, int M, int B);
RcppExport SEXP _sceptre_fisher_yates_samlper(SEXP n_totSEXP, SEXP MSEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n_tot(n_totSEXP);
    Rcpp::traits::input_parameter< int >::type M(MSEXP);
    Rcpp::traits::input_parameter< int >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(fisher_yates_samlper(n_tot, M, B));
    return rcpp_result_gen;
END_RCPP
}
// hybrid_fisher_iwor_sampler
SEXP hybrid_fisher_iwor_sampler(int N, int m, int M, int B);
RcppExport SEXP _sceptre_hybrid_fisher_iwor_sampler(SEXP NSEXP, SEXP mSEXP, SEXP MSEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type M(MSEXP);
    Rcpp::traits::input_parameter< int >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(hybrid_fisher_iwor_sampler(N, m, M, B));
    return rcpp_result_gen;
END_RCPP
}
// crt_index_sampler
SEXP crt_index_sampler(NumericVector fitted_probabilities, int B);
RcppExport SEXP _sceptre_crt_index_sampler(SEXP fitted_probabilitiesSEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type fitted_probabilities(fitted_probabilitiesSEXP);
    Rcpp::traits::input_parameter< int >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(crt_index_sampler(fitted_probabilities, B));
    return rcpp_result_gen;
END_RCPP
}
// crt_index_sampler_fast
SEXP crt_index_sampler_fast(NumericVector fitted_probabilities, int B);
RcppExport SEXP _sceptre_crt_index_sampler_fast(SEXP fitted_probabilitiesSEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type fitted_probabilities(fitted_probabilitiesSEXP);
    Rcpp::traits::input_parameter< int >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(crt_index_sampler_fast(fitted_probabilities, B));
    return rcpp_result_gen;
END_RCPP
}
// run_low_level_test_full_v4
SEXP run_low_level_test_full_v4(NumericVector y, NumericVector mu, NumericVector a, NumericVector w, NumericMatrix D, IntegerVector trt_idxs, int n_trt, bool use_all_cells, SEXP synthetic_idxs, int B1, int B2, int B3, bool fit_parametric_curve, bool return_resampling_dist, int side_code);
RcppExport SEXP _sceptre_run_low_level_test_full_v4(SEXP ySEXP, SEXP muSEXP, SEXP aSEXP, SEXP wSEXP, SEXP DSEXP, SEXP trt_idxsSEXP, SEXP n_trtSEXP, SEXP use_all_cellsSEXP, SEXP synthetic_idxsSEXP, SEXP B1SEXP, SEXP B2SEXP, SEXP B3SEXP, SEXP fit_parametric_curveSEXP, SEXP return_resampling_distSEXP, SEXP side_codeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type w(wSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type D(DSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type trt_idxs(trt_idxsSEXP);
    Rcpp::traits::input_parameter< int >::type n_trt(n_trtSEXP);
    Rcpp::traits::input_parameter< bool >::type use_all_cells(use_all_cellsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type synthetic_idxs(synthetic_idxsSEXP);
    Rcpp::traits::input_parameter< int >::type B1(B1SEXP);
    Rcpp::traits::input_parameter< int >::type B2(B2SEXP);
    Rcpp::traits::input_parameter< int >::type B3(B3SEXP);
    Rcpp::traits::input_parameter< bool >::type fit_parametric_curve(fit_parametric_curveSEXP);
    Rcpp::traits::input_parameter< bool >::type return_resampling_dist(return_resampling_distSEXP);
    Rcpp::traits::input_parameter< int >::type side_code(side_codeSEXP);
    rcpp_result_gen = Rcpp::wrap(run_low_level_test_full_v4(y, mu, a, w, D, trt_idxs, n_trt, use_all_cells, synthetic_idxs, B1, B2, B3, fit_parametric_curve, return_resampling_dist, side_code));
    return rcpp_result_gen;
END_RCPP
}
// sample_combinations
IntegerMatrix sample_combinations(int undercover_group_size, double n_pairs_to_sample, int N_NONZERO_TRT, int N_NONZERO_CNTRL, double n_possible_groups, IntegerMatrix n_nonzero_m, IntegerVector n_nonzero_tot, int N_POSSIBLE_GROUPS_THRESHOLD);
RcppExport SEXP _sceptre_sample_combinations(SEXP undercover_group_sizeSEXP, SEXP n_pairs_to_sampleSEXP, SEXP N_NONZERO_TRTSEXP, SEXP N_NONZERO_CNTRLSEXP, SEXP n_possible_groupsSEXP, SEXP n_nonzero_mSEXP, SEXP n_nonzero_totSEXP, SEXP N_POSSIBLE_GROUPS_THRESHOLDSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type undercover_group_size(undercover_group_sizeSEXP);
    Rcpp::traits::input_parameter< double >::type n_pairs_to_sample(n_pairs_to_sampleSEXP);
    Rcpp::traits::input_parameter< int >::type N_NONZERO_TRT(N_NONZERO_TRTSEXP);
    Rcpp::traits::input_parameter< int >::type N_NONZERO_CNTRL(N_NONZERO_CNTRLSEXP);
    Rcpp::traits::input_parameter< double >::type n_possible_groups(n_possible_groupsSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type n_nonzero_m(n_nonzero_mSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type n_nonzero_tot(n_nonzero_totSEXP);
    Rcpp::traits::input_parameter< int >::type N_POSSIBLE_GROUPS_THRESHOLD(N_POSSIBLE_GROUPS_THRESHOLDSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_combinations(undercover_group_size, n_pairs_to_sample, N_NONZERO_TRT, N_NONZERO_CNTRL, n_possible_groups, n_nonzero_m, n_nonzero_tot, N_POSSIBLE_GROUPS_THRESHOLD));
    return rcpp_result_gen;
END_RCPP
}
// iterate_over_combinations
IntegerMatrix iterate_over_combinations(int n_nt_grnas, int undercover_group_size, int n_possible_groups);
RcppExport SEXP _sceptre_iterate_over_combinations(SEXP n_nt_grnasSEXP, SEXP undercover_group_sizeSEXP, SEXP n_possible_groupsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n_nt_grnas(n_nt_grnasSEXP);
    Rcpp::traits::input_parameter< int >::type undercover_group_size(undercover_group_sizeSEXP);
    Rcpp::traits::input_parameter< int >::type n_possible_groups(n_possible_groupsSEXP);
    rcpp_result_gen = Rcpp::wrap(iterate_over_combinations(n_nt_grnas, undercover_group_size, n_possible_groups));
    return rcpp_result_gen;
END_RCPP
}
// sample_undercover_pairs
List sample_undercover_pairs(IntegerMatrix n_nonzero_m, IntegerVector n_nonzero_tot, IntegerMatrix possible_groups_m, int n_pairs_to_sample, int N_NONZERO_TRT, int N_NONZERO_CNTRL, bool low_moi, IntegerVector j, IntegerVector p, int n_cells, int n_genes, List indiv_nt_grna_idxs);
RcppExport SEXP _sceptre_sample_undercover_pairs(SEXP n_nonzero_mSEXP, SEXP n_nonzero_totSEXP, SEXP possible_groups_mSEXP, SEXP n_pairs_to_sampleSEXP, SEXP N_NONZERO_TRTSEXP, SEXP N_NONZERO_CNTRLSEXP, SEXP low_moiSEXP, SEXP jSEXP, SEXP pSEXP, SEXP n_cellsSEXP, SEXP n_genesSEXP, SEXP indiv_nt_grna_idxsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type n_nonzero_m(n_nonzero_mSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type n_nonzero_tot(n_nonzero_totSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type possible_groups_m(possible_groups_mSEXP);
    Rcpp::traits::input_parameter< int >::type n_pairs_to_sample(n_pairs_to_sampleSEXP);
    Rcpp::traits::input_parameter< int >::type N_NONZERO_TRT(N_NONZERO_TRTSEXP);
    Rcpp::traits::input_parameter< int >::type N_NONZERO_CNTRL(N_NONZERO_CNTRLSEXP);
    Rcpp::traits::input_parameter< bool >::type low_moi(low_moiSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type j(jSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type n_cells(n_cellsSEXP);
    Rcpp::traits::input_parameter< int >::type n_genes(n_genesSEXP);
    Rcpp::traits::input_parameter< List >::type indiv_nt_grna_idxs(indiv_nt_grna_idxsSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_undercover_pairs(n_nonzero_m, n_nonzero_tot, possible_groups_m, n_pairs_to_sample, N_NONZERO_TRT, N_NONZERO_CNTRL, low_moi, j, p, n_cells, n_genes, indiv_nt_grna_idxs));
    return rcpp_result_gen;
END_RCPP
}
// increment_matrix
void increment_matrix(IntegerMatrix m);
RcppExport SEXP _sceptre_increment_matrix(SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type m(mSEXP);
    increment_matrix(m);
    return R_NilValue;
END_RCPP
}
// compute_nt_nonzero_matrix_and_n_ok_pairs_v2
List compute_nt_nonzero_matrix_and_n_ok_pairs_v2(IntegerVector j, IntegerVector p, int n_cells, List grna_group_idxs, List indiv_nt_grna_idxs, IntegerVector all_nt_idxs, IntegerVector to_analyze_response_idxs, IntegerVector to_analyze_grna_idxs, int n_nonzero_trt_thresh, int n_nonzero_cntrl_thresh, bool compute_n_ok_pairs, bool control_group_complement);
RcppExport SEXP _sceptre_compute_nt_nonzero_matrix_and_n_ok_pairs_v2(SEXP jSEXP, SEXP pSEXP, SEXP n_cellsSEXP, SEXP grna_group_idxsSEXP, SEXP indiv_nt_grna_idxsSEXP, SEXP all_nt_idxsSEXP, SEXP to_analyze_response_idxsSEXP, SEXP to_analyze_grna_idxsSEXP, SEXP n_nonzero_trt_threshSEXP, SEXP n_nonzero_cntrl_threshSEXP, SEXP compute_n_ok_pairsSEXP, SEXP control_group_complementSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type j(jSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type n_cells(n_cellsSEXP);
    Rcpp::traits::input_parameter< List >::type grna_group_idxs(grna_group_idxsSEXP);
    Rcpp::traits::input_parameter< List >::type indiv_nt_grna_idxs(indiv_nt_grna_idxsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type all_nt_idxs(all_nt_idxsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type to_analyze_response_idxs(to_analyze_response_idxsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type to_analyze_grna_idxs(to_analyze_grna_idxsSEXP);
    Rcpp::traits::input_parameter< int >::type n_nonzero_trt_thresh(n_nonzero_trt_threshSEXP);
    Rcpp::traits::input_parameter< int >::type n_nonzero_cntrl_thresh(n_nonzero_cntrl_threshSEXP);
    Rcpp::traits::input_parameter< bool >::type compute_n_ok_pairs(compute_n_ok_pairsSEXP);
    Rcpp::traits::input_parameter< bool >::type control_group_complement(control_group_complementSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_nt_nonzero_matrix_and_n_ok_pairs_v2(j, p, n_cells, grna_group_idxs, indiv_nt_grna_idxs, all_nt_idxs, to_analyze_response_idxs, to_analyze_grna_idxs, n_nonzero_trt_thresh, n_nonzero_cntrl_thresh, compute_n_ok_pairs, control_group_complement));
    return rcpp_result_gen;
END_RCPP
}
// compute_n_nonzero_trt_vector
IntegerVector compute_n_nonzero_trt_vector(NumericVector expression_vector, List grna_group_idxs, IntegerVector grna_group_posits);
RcppExport SEXP _sceptre_compute_n_nonzero_trt_vector(SEXP expression_vectorSEXP, SEXP grna_group_idxsSEXP, SEXP grna_group_positsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type expression_vector(expression_vectorSEXP);
    Rcpp::traits::input_parameter< List >::type grna_group_idxs(grna_group_idxsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type grna_group_posits(grna_group_positsSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_n_nonzero_trt_vector(expression_vector, grna_group_idxs, grna_group_posits));
    return rcpp_result_gen;
END_RCPP
}
// test_boost_sampler
NumericVector test_boost_sampler(int n);
RcppExport SEXP _sceptre_test_boost_sampler(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(test_boost_sampler(n));
    return rcpp_result_gen;
END_RCPP
}
// test_std_sampler
NumericVector test_std_sampler(int n);
RcppExport SEXP _sceptre_test_std_sampler(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(test_std_sampler(n));
    return rcpp_result_gen;
END_RCPP
}
// compute_empirical_p_value
double compute_empirical_p_value(const std::vector<double>& null_statistics, double z_orig, int side);
RcppExport SEXP _sceptre_compute_empirical_p_value(SEXP null_statisticsSEXP, SEXP z_origSEXP, SEXP sideSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<double>& >::type null_statistics(null_statisticsSEXP);
    Rcpp::traits::input_parameter< double >::type z_orig(z_origSEXP);
    Rcpp::traits::input_parameter< int >::type side(sideSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_empirical_p_value(null_statistics, z_orig, side));
    return rcpp_result_gen;
END_RCPP
}
// fit_skew_normal_funct
std::vector<double> fit_skew_normal_funct(const std::vector<double>& y);
RcppExport SEXP _sceptre_fit_skew_normal_funct(SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<double>& >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(fit_skew_normal_funct(y));
    return rcpp_result_gen;
END_RCPP
}
// check_sn_tail
bool check_sn_tail(const std::vector<double>& y, double xi_hat, double omega_hat, double alpha_hat);
RcppExport SEXP _sceptre_check_sn_tail(SEXP ySEXP, SEXP xi_hatSEXP, SEXP omega_hatSEXP, SEXP alpha_hatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<double>& >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type xi_hat(xi_hatSEXP);
    Rcpp::traits::input_parameter< double >::type omega_hat(omega_hatSEXP);
    Rcpp::traits::input_parameter< double >::type alpha_hat(alpha_hatSEXP);
    rcpp_result_gen = Rcpp::wrap(check_sn_tail(y, xi_hat, omega_hat, alpha_hat));
    return rcpp_result_gen;
END_RCPP
}
// fit_and_evaluate_skew_normal
std::vector<double> fit_and_evaluate_skew_normal(double z_orig, std::vector<double>& null_statistics, int side_code);
RcppExport SEXP _sceptre_fit_and_evaluate_skew_normal(SEXP z_origSEXP, SEXP null_statisticsSEXP, SEXP side_codeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type z_orig(z_origSEXP);
    Rcpp::traits::input_parameter< std::vector<double>& >::type null_statistics(null_statisticsSEXP);
    Rcpp::traits::input_parameter< int >::type side_code(side_codeSEXP);
    rcpp_result_gen = Rcpp::wrap(fit_and_evaluate_skew_normal(z_orig, null_statistics, side_code));
    return rcpp_result_gen;
END_RCPP
}
// compute_sn_density
NumericVector compute_sn_density(NumericVector x_grid, double xi, double omega, double alpha);
RcppExport SEXP _sceptre_compute_sn_density(SEXP x_gridSEXP, SEXP xiSEXP, SEXP omegaSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x_grid(x_gridSEXP);
    Rcpp::traits::input_parameter< double >::type xi(xiSEXP);
    Rcpp::traits::input_parameter< double >::type omega(omegaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_sn_density(x_grid, xi, omega, alpha));
    return rcpp_result_gen;
END_RCPP
}
// compute_sn_density_2
double compute_sn_density_2(double x, double xi, double omega, double alpha);
RcppExport SEXP _sceptre_compute_sn_density_2(SEXP xSEXP, SEXP xiSEXP, SEXP omegaSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type xi(xiSEXP);
    Rcpp::traits::input_parameter< double >::type omega(omegaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_sn_density_2(x, xi, omega, alpha));
    return rcpp_result_gen;
END_RCPP
}
// load_csr_row
NumericVector load_csr_row(IntegerVector j, IntegerVector p, NumericVector x, int row_idx, int n_cells);
RcppExport SEXP _sceptre_load_csr_row(SEXP jSEXP, SEXP pSEXP, SEXP xSEXP, SEXP row_idxSEXP, SEXP n_cellsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type j(jSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type row_idx(row_idxSEXP);
    Rcpp::traits::input_parameter< int >::type n_cells(n_cellsSEXP);
    rcpp_result_gen = Rcpp::wrap(load_csr_row(j, p, x, row_idx, n_cells));
    return rcpp_result_gen;
END_RCPP
}
// obtain_pointer_vector
IntegerVector obtain_pointer_vector(IntegerVector i, int dim);
RcppExport SEXP _sceptre_obtain_pointer_vector(SEXP iSEXP, SEXP dimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type i(iSEXP);
    Rcpp::traits::input_parameter< int >::type dim(dimSEXP);
    rcpp_result_gen = Rcpp::wrap(obtain_pointer_vector(i, dim));
    return rcpp_result_gen;
END_RCPP
}
// compute_cell_covariates_cpp
List compute_cell_covariates_cpp(IntegerVector i, IntegerVector p, NumericVector x, int n_genes, int n_cells, IntegerVector mt_gene_idxs, bool compute_p_mito);
RcppExport SEXP _sceptre_compute_cell_covariates_cpp(SEXP iSEXP, SEXP pSEXP, SEXP xSEXP, SEXP n_genesSEXP, SEXP n_cellsSEXP, SEXP mt_gene_idxsSEXP, SEXP compute_p_mitoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type i(iSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type n_genes(n_genesSEXP);
    Rcpp::traits::input_parameter< int >::type n_cells(n_cellsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type mt_gene_idxs(mt_gene_idxsSEXP);
    Rcpp::traits::input_parameter< bool >::type compute_p_mito(compute_p_mitoSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_cell_covariates_cpp(i, p, x, n_genes, n_cells, mt_gene_idxs, compute_p_mito));
    return rcpp_result_gen;
END_RCPP
}
// compute_colwise_max
IntegerVector compute_colwise_max(IntegerVector i, IntegerVector p, NumericVector x, int n_cells);
RcppExport SEXP _sceptre_compute_colwise_max(SEXP iSEXP, SEXP pSEXP, SEXP xSEXP, SEXP n_cellsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type i(iSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type n_cells(n_cellsSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_colwise_max(i, p, x, n_cells));
    return rcpp_result_gen;
END_RCPP
}
// group_and_threshold
IntegerVector group_and_threshold(IntegerVector j, IntegerVector p, NumericVector x, IntegerVector row_idxs, int threshold);
RcppExport SEXP _sceptre_group_and_threshold(SEXP jSEXP, SEXP pSEXP, SEXP xSEXP, SEXP row_idxsSEXP, SEXP thresholdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type j(jSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type row_idxs(row_idxsSEXP);
    Rcpp::traits::input_parameter< int >::type threshold(thresholdSEXP);
    rcpp_result_gen = Rcpp::wrap(group_and_threshold(j, p, x, row_idxs, threshold));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_sceptre_synth_idx_list_to_matrix", (DL_FUNC) &_sceptre_synth_idx_list_to_matrix, 1},
    {"_sceptre_synth_idx_list_to_r_list", (DL_FUNC) &_sceptre_synth_idx_list_to_r_list, 1},
    {"_sceptre_print_synth_idx_list_row", (DL_FUNC) &_sceptre_print_synth_idx_list_row, 2},
    {"_sceptre_estimate_theta", (DL_FUNC) &_sceptre_estimate_theta, 5},
    {"_sceptre_fisher_yates_samlper", (DL_FUNC) &_sceptre_fisher_yates_samlper, 3},
    {"_sceptre_hybrid_fisher_iwor_sampler", (DL_FUNC) &_sceptre_hybrid_fisher_iwor_sampler, 4},
    {"_sceptre_crt_index_sampler", (DL_FUNC) &_sceptre_crt_index_sampler, 2},
    {"_sceptre_crt_index_sampler_fast", (DL_FUNC) &_sceptre_crt_index_sampler_fast, 2},
    {"_sceptre_run_low_level_test_full_v4", (DL_FUNC) &_sceptre_run_low_level_test_full_v4, 15},
    {"_sceptre_sample_combinations", (DL_FUNC) &_sceptre_sample_combinations, 8},
    {"_sceptre_iterate_over_combinations", (DL_FUNC) &_sceptre_iterate_over_combinations, 3},
    {"_sceptre_sample_undercover_pairs", (DL_FUNC) &_sceptre_sample_undercover_pairs, 12},
    {"_sceptre_increment_matrix", (DL_FUNC) &_sceptre_increment_matrix, 1},
    {"_sceptre_compute_nt_nonzero_matrix_and_n_ok_pairs_v2", (DL_FUNC) &_sceptre_compute_nt_nonzero_matrix_and_n_ok_pairs_v2, 12},
    {"_sceptre_compute_n_nonzero_trt_vector", (DL_FUNC) &_sceptre_compute_n_nonzero_trt_vector, 3},
    {"_sceptre_test_boost_sampler", (DL_FUNC) &_sceptre_test_boost_sampler, 1},
    {"_sceptre_test_std_sampler", (DL_FUNC) &_sceptre_test_std_sampler, 1},
    {"_sceptre_compute_empirical_p_value", (DL_FUNC) &_sceptre_compute_empirical_p_value, 3},
    {"_sceptre_fit_skew_normal_funct", (DL_FUNC) &_sceptre_fit_skew_normal_funct, 1},
    {"_sceptre_check_sn_tail", (DL_FUNC) &_sceptre_check_sn_tail, 4},
    {"_sceptre_fit_and_evaluate_skew_normal", (DL_FUNC) &_sceptre_fit_and_evaluate_skew_normal, 3},
    {"_sceptre_compute_sn_density", (DL_FUNC) &_sceptre_compute_sn_density, 4},
    {"_sceptre_compute_sn_density_2", (DL_FUNC) &_sceptre_compute_sn_density_2, 4},
    {"_sceptre_load_csr_row", (DL_FUNC) &_sceptre_load_csr_row, 5},
    {"_sceptre_obtain_pointer_vector", (DL_FUNC) &_sceptre_obtain_pointer_vector, 2},
    {"_sceptre_compute_cell_covariates_cpp", (DL_FUNC) &_sceptre_compute_cell_covariates_cpp, 7},
    {"_sceptre_compute_colwise_max", (DL_FUNC) &_sceptre_compute_colwise_max, 4},
    {"_sceptre_group_and_threshold", (DL_FUNC) &_sceptre_group_and_threshold, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_sceptre(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
