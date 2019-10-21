#include <iostream>

#include "Rational.h"

int main() {
  int i = 5;
  int *j = new int(8);

  std::cout << *j << std::endl;
  {
    Rational *r = new Rational(7, 9);
    Rational s(8, 11);
    s.print();

    // s *= 5;

    Rational t = s * 5;

    std::cout << t << std::endl;

    std::cout << *(j + 2) << std::endl;

    (*r).print();

    r->print();

    delete r;
  }

  std::cout << "Ende" << std::endl;

  return 0;
}