#include <iostream>

#include "all.hpp"


int main() {
  std::cout << "\n"
            << "debug\n"
            << "-----\n";
  // see debug.cpp how it works
  debug_defined();
  ndebug_defined();
  underscore_debug_defined();
  prosto_debug_defined();
  prosto_pseudo_debug_defined();

  std::cin.ignore();
  return 0;
}
