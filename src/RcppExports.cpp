// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/BMTME.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

// wishart
arma::mat wishart(unsigned int df, const arma::mat& S);
static SEXP _BMTME_wishart_try(SEXP dfSEXP, SEXP SSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< unsigned int >::type df(dfSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type S(SSEXP);
    rcpp_result_gen = Rcpp::wrap(wishart(df, S));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _BMTME_wishart(SEXP dfSEXP, SEXP SSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_BMTME_wishart_try(dfSEXP, SSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// inv_wishart
arma::mat inv_wishart(unsigned int df, const arma::mat& S);
static SEXP _BMTME_inv_wishart_try(SEXP dfSEXP, SEXP SSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< unsigned int >::type df(dfSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type S(SSEXP);
    rcpp_result_gen = Rcpp::wrap(inv_wishart(df, S));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _BMTME_inv_wishart(SEXP dfSEXP, SEXP SSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_BMTME_inv_wishart_try(dfSEXP, SSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// MVnormvv
arma::rowvec MVnormvv(arma::vec mean, const arma::mat& S);
static SEXP _BMTME_MVnormvv_try(SEXP meanSEXP, SEXP SSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::vec >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type S(SSEXP);
    rcpp_result_gen = Rcpp::wrap(MVnormvv(mean, S));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _BMTME_MVnormvv(SEXP meanSEXP, SEXP SSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_BMTME_MVnormvv_try(meanSEXP, SSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// MatMul
arma::mat MatMul(arma::mat& X, arma::mat& Y);
static SEXP _BMTME_MatMul_try(SEXP XSEXP, SEXP YSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Y(YSEXP);
    rcpp_result_gen = Rcpp::wrap(MatMul(X, Y));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _BMTME_MatMul(SEXP XSEXP, SEXP YSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_BMTME_MatMul_try(XSEXP, YSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// Krone
arma::mat Krone(const arma::mat& A, const arma::mat& B);
static SEXP _BMTME_Krone_try(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(Krone(A, B));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _BMTME_Krone(SEXP ASEXP, SEXP BSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_BMTME_Krone_try(ASEXP, BSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}

// validate (ensure exported C++ functions exist before calling them)
static int _BMTME_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("arma::mat(*wishart)(unsigned int,const arma::mat&)");
        signatures.insert("arma::mat(*inv_wishart)(unsigned int,const arma::mat&)");
        signatures.insert("arma::rowvec(*MVnormvv)(arma::vec,const arma::mat&)");
        signatures.insert("arma::mat(*MatMul)(arma::mat&,arma::mat&)");
        signatures.insert("arma::mat(*Krone)(const arma::mat&,const arma::mat&)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP _BMTME_RcppExport_registerCCallable() { 
    R_RegisterCCallable("BMTME", "_BMTME_wishart", (DL_FUNC)_BMTME_wishart_try);
    R_RegisterCCallable("BMTME", "_BMTME_inv_wishart", (DL_FUNC)_BMTME_inv_wishart_try);
    R_RegisterCCallable("BMTME", "_BMTME_MVnormvv", (DL_FUNC)_BMTME_MVnormvv_try);
    R_RegisterCCallable("BMTME", "_BMTME_MatMul", (DL_FUNC)_BMTME_MatMul_try);
    R_RegisterCCallable("BMTME", "_BMTME_Krone", (DL_FUNC)_BMTME_Krone_try);
    R_RegisterCCallable("BMTME", "_BMTME_RcppExport_validate", (DL_FUNC)_BMTME_RcppExport_validate);
    return R_NilValue;
}

static const R_CallMethodDef CallEntries[] = {
    {"_BMTME_wishart", (DL_FUNC) &_BMTME_wishart, 2},
    {"_BMTME_inv_wishart", (DL_FUNC) &_BMTME_inv_wishart, 2},
    {"_BMTME_MVnormvv", (DL_FUNC) &_BMTME_MVnormvv, 2},
    {"_BMTME_MatMul", (DL_FUNC) &_BMTME_MatMul, 2},
    {"_BMTME_Krone", (DL_FUNC) &_BMTME_Krone, 2},
    {"_BMTME_RcppExport_registerCCallable", (DL_FUNC) &_BMTME_RcppExport_registerCCallable, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_BMTME(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
