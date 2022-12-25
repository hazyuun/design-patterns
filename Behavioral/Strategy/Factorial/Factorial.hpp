#pragma once

#include <cstdint>
#include <iostream>

class Factorial {
public:
  virtual uint64_t compute(uint64_t N) const = 0;
  virtual ~Factorial(){
    std::cout << " ~Factorial() called" << std::endl;
  }
};