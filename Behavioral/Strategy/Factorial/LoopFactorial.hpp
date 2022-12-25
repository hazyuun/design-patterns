#pragma once

#include <cstdint>
#include <iostream>

#include "Factorial.hpp"

class LoopFactorial: public Factorial {
public:
  uint64_t compute(uint64_t N) const override {
    uint64_t result = 1;
    for(uint64_t i = 1; i <= N; i++){
      result = result * i;
    }
    return result;
  }

  ~LoopFactorial(){
    std::cout << " ~LoopFactorial() called" << std::endl;
  }
};