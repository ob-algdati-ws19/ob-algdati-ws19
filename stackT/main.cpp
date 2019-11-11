#include <iostream>
#include <string>

#include "stack.h"

int main() {
  auto intStack = new stack<int>();
  std::cout << *intStack << std::endl;
  intStack->push(1);
  intStack->push(2);
  intStack->push(3);
  intStack->push(4);
  std::cout << *intStack << std::endl;
  auto nextIntFromStack = intStack->top();
  intStack->pop();
  std::cout << nextIntFromStack << " und " << *intStack << std::endl;

  auto stringStack = new stack<std::string>();
  std::cout << *stringStack << std::endl;
  stringStack->push("Bachelor");
  stringStack->push("und");
  stringStack->push("Master");
  stringStack->push("AlgDatI");
  std::cout << *stringStack << std::endl;
  auto nextStringFromStack = stringStack->top();
  stringStack->pop();
  std::cout << nextStringFromStack << " und " << *stringStack << std::endl;

  return 0;
}
