#pragma once

#include "Printer.hpp"
#include <iostream>

class RedPrinter: public Printer {
  public:
  virtual void print(std::string str) const override {
    std::cout << "\33[31m" << str << "\33[0m";
  }

  ~RedPrinter(){
    print("\n ~RedPrinter() called ");
  }
};