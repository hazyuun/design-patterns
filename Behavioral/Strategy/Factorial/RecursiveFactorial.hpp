#pragma once

#include <cstdint>
#include <iostream>

#include "Factorial.hpp"

class RecursiveFactorial: public Factorial {
public:
  uint64_t compute(uint64_t N) const override {
    if(N == 0 || N == 1)
      return 1;
    return N * compute(N - 1);
  }

  ~RecursiveFactorial(){
    std::cout << " ~RecursiveFactorial() called" << std::endl;
  }
};