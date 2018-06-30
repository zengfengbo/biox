// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// dimer
String dimer(String s1, String s2);
RcppExport SEXP _biox_dimer(SEXP s1SEXP, SEXP s2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type s1(s1SEXP);
    Rcpp::traits::input_parameter< String >::type s2(s2SEXP);
    rcpp_result_gen = Rcpp::wrap(dimer(s1, s2));
    return rcpp_result_gen;
END_RCPP
}
// dimer_v
StringVector dimer_v(StringVector ss1, StringVector ss2);
RcppExport SEXP _biox_dimer_v(SEXP ss1SEXP, SEXP ss2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< StringVector >::type ss1(ss1SEXP);
    Rcpp::traits::input_parameter< StringVector >::type ss2(ss2SEXP);
    rcpp_result_gen = Rcpp::wrap(dimer_v(ss1, ss2));
    return rcpp_result_gen;
END_RCPP
}
// dimer_test
NumericVector dimer_test(StringVector ss, float cutoff);
RcppExport SEXP _biox_dimer_test(SEXP ssSEXP, SEXP cutoffSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< StringVector >::type ss(ssSEXP);
    Rcpp::traits::input_parameter< float >::type cutoff(cutoffSEXP);
    rcpp_result_gen = Rcpp::wrap(dimer_test(ss, cutoff));
    return rcpp_result_gen;
END_RCPP
}
// dimer_tm_v
NumericVector dimer_tm_v(StringVector ss1, StringVector ss2);
RcppExport SEXP _biox_dimer_tm_v(SEXP ss1SEXP, SEXP ss2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< StringVector >::type ss1(ss1SEXP);
    Rcpp::traits::input_parameter< StringVector >::type ss2(ss2SEXP);
    rcpp_result_gen = Rcpp::wrap(dimer_tm_v(ss1, ss2));
    return rcpp_result_gen;
END_RCPP
}
// read_fa
DataFrame read_fa(String file);
RcppExport SEXP _biox_read_fa(SEXP fileSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type file(fileSEXP);
    rcpp_result_gen = Rcpp::wrap(read_fa(file));
    return rcpp_result_gen;
END_RCPP
}
// read_fq
DataFrame read_fq(String file);
RcppExport SEXP _biox_read_fq(SEXP fileSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type file(fileSEXP);
    rcpp_result_gen = Rcpp::wrap(read_fq(file));
    return rcpp_result_gen;
END_RCPP
}
// kmers
StringVector kmers(String s, int bin, int step);
RcppExport SEXP _biox_kmers(SEXP sSEXP, SEXP binSEXP, SEXP stepSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type s(sSEXP);
    Rcpp::traits::input_parameter< int >::type bin(binSEXP);
    Rcpp::traits::input_parameter< int >::type step(stepSEXP);
    rcpp_result_gen = Rcpp::wrap(kmers(s, bin, step));
    return rcpp_result_gen;
END_RCPP
}
// kmers_tm
StringVector kmers_tm(String s, float t0, float dt);
RcppExport SEXP _biox_kmers_tm(SEXP sSEXP, SEXP t0SEXP, SEXP dtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type s(sSEXP);
    Rcpp::traits::input_parameter< float >::type t0(t0SEXP);
    Rcpp::traits::input_parameter< float >::type dt(dtSEXP);
    rcpp_result_gen = Rcpp::wrap(kmers_tm(s, t0, dt));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_hello_world
List rcpp_hello_world();
RcppExport SEXP _biox_rcpp_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_hello_world());
    return rcpp_result_gen;
END_RCPP
}
// rdna
StringVector rdna(int n, int l);
RcppExport SEXP _biox_rdna(SEXP nSEXP, SEXP lSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type l(lSEXP);
    rcpp_result_gen = Rcpp::wrap(rdna(n, l));
    return rcpp_result_gen;
END_RCPP
}
// rrna
StringVector rrna(int n, int l);
RcppExport SEXP _biox_rrna(SEXP nSEXP, SEXP lSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type l(lSEXP);
    rcpp_result_gen = Rcpp::wrap(rrna(n, l));
    return rcpp_result_gen;
END_RCPP
}
// revcomp
StringVector revcomp(StringVector ss);
RcppExport SEXP _biox_revcomp(SEXP ssSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< StringVector >::type ss(ssSEXP);
    rcpp_result_gen = Rcpp::wrap(revcomp(ss));
    return rcpp_result_gen;
END_RCPP
}
// tm
NumericVector tm(StringVector ss);
RcppExport SEXP _biox_tm(SEXP ssSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< StringVector >::type ss(ssSEXP);
    rcpp_result_gen = Rcpp::wrap(tm(ss));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_biox_dimer", (DL_FUNC) &_biox_dimer, 2},
    {"_biox_dimer_v", (DL_FUNC) &_biox_dimer_v, 2},
    {"_biox_dimer_test", (DL_FUNC) &_biox_dimer_test, 2},
    {"_biox_dimer_tm_v", (DL_FUNC) &_biox_dimer_tm_v, 2},
    {"_biox_read_fa", (DL_FUNC) &_biox_read_fa, 1},
    {"_biox_read_fq", (DL_FUNC) &_biox_read_fq, 1},
    {"_biox_kmers", (DL_FUNC) &_biox_kmers, 3},
    {"_biox_kmers_tm", (DL_FUNC) &_biox_kmers_tm, 3},
    {"_biox_rcpp_hello_world", (DL_FUNC) &_biox_rcpp_hello_world, 0},
    {"_biox_rdna", (DL_FUNC) &_biox_rdna, 2},
    {"_biox_rrna", (DL_FUNC) &_biox_rrna, 2},
    {"_biox_revcomp", (DL_FUNC) &_biox_revcomp, 1},
    {"_biox_tm", (DL_FUNC) &_biox_tm, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_biox(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
