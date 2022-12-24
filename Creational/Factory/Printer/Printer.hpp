#pragma once

#include <iostream>
#include <string>

class Printer {
public:
  virtual void print(std::string str) const = 0;
  virtual ~Printer() {
    std::cout << "\n ~Printer() called" << std::endl;
  };
};