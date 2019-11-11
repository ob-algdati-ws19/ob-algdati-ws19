#ifndef STACKT_STACK_H
#define STACKT_STACK_H

#include <iostream>
/*
 * Ein Template kann erst compiliert werden, wenn klar ist für welche
 * Spezialisierung. Daher muss die Implementierung mit im Header-File enthalten
 * sein und kann nicht in einem separaten Code-File stehen.
 */

// forward declaration damit eine Spezialisierung für operator<< erzeugt werden
// kann.
template <typename T>
class stack;

template <typename T>
std::ostream &operator<<(std::ostream &, stack<T> &);

template <typename T>
class stack {
 private:
  struct elem {
    T value;
    elem *next;

    elem(T, elem *);
  };

  elem *topElem = nullptr;

 public:
  // just default constructor
  ~stack();

  void push(T);

  void pop();

  T top();

  // <> steht für Spezialisierung
  friend std::ostream &operator<<<>(std::ostream &, stack<T> &);
};

template <typename T>
stack<T>::elem::elem(T v, elem *n) : value(v), next(n) {}

template <typename T>
stack<T>::~stack() {
  auto current = topElem;
  while (current != nullptr) {
    auto toDelete = current;
    current = current->next;
    delete toDelete;
  }
}

template <typename T>
void stack<T>::push(T value) {
  topElem = new elem(value, topElem);
}

template <typename T>
void stack<T>::pop() {
  if (topElem != nullptr) topElem = topElem->next;
}

template <typename T>
T stack<T>::top() {
  if (topElem != nullptr) return topElem->value;
  throw "empty stack";
}

template <typename T>
std::ostream &operator<<(std::ostream &os, stack<T> &stack) {
  if (stack.topElem == nullptr) return os << "empty stack";
  auto current = stack.topElem;
  while (current != nullptr) {
    os << " -> " << current->value;
    current = current->next;
  }
  return os;
}

#endif  // STACKT_STACK_H
