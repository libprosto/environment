#ifndef TEST_DEBUG_HPP
#define TEST_DEBUG_HPP


#include <iostream>

#include <prosto/environment/debug.hpp>


bool debug_defined() {
#ifdef DEBUG
  std::cout << "DEBUG defined\n";
  return true;
#else
  std::cout << "DEBUG not defined\n";
  return false;
#endif  
}


bool ndebug_defined() {
#ifdef NDEBUG
  std::cout << "NDEBUG defined\n";
  return true;
#else
  std::cout << "NDEBUG not defined\n";
  return false;
#endif  
}


bool underscore_debug_defined() {
#ifdef _DEBUG
  std::cout << "_DEBUG defined\n";
  return true;
#else
  std::cout << "_DEBUG not defined\n";
  return false;
#endif  
}


bool prosto_debug_defined() {
#ifdef PROSTO_DEBUG
  std::cout << "PROSTO_DEBUG defined\n";
  return true;
#else
  std::cout << "PROSTO_DEBUG not defined\n";
  return false;
#endif  
}


bool prosto_pseudo_debug_defined() {
#ifdef PROSTO_PSEUDO_DEBUG
  std::cout << "PROSTO_PSEUDO_DEBUG defined\n";
  return true;
#else
  std::cout << "PROSTO_PSEUDO_DEBUG not defined\n";
  return false;
#endif  
}

#endif // TEST_DEBUG_HPP
