#include <Rcpp.h>
#include <omp.h>
#include "seq.h"
using namespace Rcpp;

String rDNA0(int l) {
  char * p = new char[l+1];
  *(p+l) = '\0';
  char bases[4] = {'A', 'G', 'C', 'T'};
  
//#pragma omp parallel for
  for(int i = 0; i < l; ++i){
    *(p+i) = bases[rand() % 4];
  }
  String s(p);
  return s;
}

// [[Rcpp::export]]
StringVector rdna(int n = 1, int l = 20) {
  StringVector ss(n);
  
#pragma omp parallel for
  for(int i = 0; i < n; ++i) 
    ss[i] = rDNA0(l);
  return ss;
}

String rRNA0(int l) {
  char * p = new char[l+1];
  *(p+l) = '\0';
  char bases[4] = {'A', 'G', 'C', 'U'};
  
//#pragma omp parallel for
  for(int i = 0; i < l; ++i){
    *(p+i) = bases[rand() % 4];
  }
  String s(p);
  return s;
}

// [[Rcpp::export]]
StringVector rrna(int n = 1, int l = 20) {
  StringVector ss(n);
  
#pragma omp parallel for
  for(int i = 0; i < n; ++i) 
    ss[i] = rRNA0(l);
  return ss;
}


String rPro0(int l) {
  char * p = new char[l+1];
  *(p+l) = '\0';
  char aas[22] = {
    'A', 'F', 'C', 'U', 'D', 'N', 'E', 'Q', 'G', 'H', 'L',
    'I', 'K', 'O', 'M', 'P', 'R', 'S', 'T', 'V', 'W', 'Y'
    };
  
//#pragma omp parallel for
  for(int i = 0; i < l; ++i){
    *(p+i) = aas[rand() % 22];
  }
  String s(p);
  return s;
}

// [[Rcpp::export]]
StringVector rpro(int n = 1, int l = 20) {
  StringVector ss(n);
  
#pragma omp parallel for
  for(int i = 0; i < n; ++i) 
    ss[i] = rPro0(l);
  return ss;
}
