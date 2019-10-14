#include "Rational.h"
#include <iostream>

int main() {

  int i = 5;
  int *j = new int(8);

  std::cout << *j << std::endl;

  auto r = new Rational(7,9);
  Rational s(7,9);

  r->print();

  return 0;
}