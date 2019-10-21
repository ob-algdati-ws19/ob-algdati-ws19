#ifndef RATIONAL_RATIONAL_H
#define RATIONAL_RATIONAL_H

#include <iostream>

class Rational {
 private:
  int numer;
  int denom;

 public:
  Rational(int, int);
  ~Rational();
  void print();

  Rational mult(int);

  friend Rational operator*(const Rational &r, const int &factor);
  friend std::ostream &operator<<(std::ostream &os, const Rational &r);
};

#endif