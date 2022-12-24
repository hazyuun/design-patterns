#pragma once

#include "Printer.hpp"
#include <iostream>

class BluePrinter: public Printer {
  public:
  virtual void print(std::string str) const override {
    std::cout << "\33[36m" << str << "\33[0m";
  }

  ~BluePrinter(){
    print("\n ~BluePrinter() called ");
  }
};