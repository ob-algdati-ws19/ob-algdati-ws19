#include "Rational.h"

#include <iostream>

Rational::Rational(int n, int d) : numer(n), denom(d) {}

Rational::~Rational() {
  std::cout << "someone killed me: " << numer << "/" << denom << std::endl;
}

void Rational::print() { std::cout << numer << "/" << denom << std::endl; }

Rational Rational::mult(int factor) { return Rational(numer * factor, denom); }

Rational operator*(const Rational &r, const int &factor) {
  return Rational(r.numer * factor, r.denom);
}

std::ostream &operator<<(std::ostream &os, const Rational &r) {
  os << r.numer;
  if (r.denom != 1) os << "/" << r.denom;
  return os;
}
