#pragma once

#include "Printer.hpp"
#include <iostream>

class GreenPrinter: public Printer {
  public:
  virtual void print(std::string str) const override {
    std::cout << "\33[32m" << str << "\33[0m";
  }

  ~GreenPrinter(){
    print("\n ~GreenPrinter() called ");
  }
};