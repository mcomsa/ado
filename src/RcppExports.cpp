// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// do_stata_parse
Rcpp::List do_stata_parse(std::string text, int debug_level);
RcppExport SEXP rstata_do_stata_parse(SEXP textSEXP, SEXP debug_levelSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type text(textSEXP);
    Rcpp::traits::input_parameter< int >::type debug_level(debug_levelSEXP);
    __result = Rcpp::wrap(do_stata_parse(text, debug_level));
    return __result;
END_RCPP
}
