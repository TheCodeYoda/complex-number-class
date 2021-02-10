#include<iostream>
using namespace std;
#include<cmath>
#include "complex.h"

complex::complex(double real, double imag) {
  real_=real;
  imag_=imag;
}

double complex::mag() const {
    return sqrt(real_*real_ + imag_*imag_);
}

complex operator+(const complex& lhs,const complex& rhs) {
  return complex(lhs.real_+rhs.real_,lhs.imag_+rhs.imag_);
}

complex operator-(const complex& lhs,const complex& rhs) {
  return complex(lhs.real_-rhs.real_,lhs.imag_-rhs.imag_);
}

ostream& operator<<(ostream& o,const complex &c) {
  return o<<c.real_<<"|"<<c.imag_;
}

bool operator<(const complex& lhs, const complex& rhs) {
    return lhs.mag()<rhs.mag()?true:false;
}

bool operator==(const complex& lhs, const complex& rhs) {
    return lhs.mag()==rhs.mag()?true:false;
}

bool operator!=(const complex& lhs, const complex& rhs) {
    return !(lhs==rhs);
}
