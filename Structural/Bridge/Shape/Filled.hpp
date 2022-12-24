#pragma once

#include <iostream>
#include <string>

#include "Style.hpp"

class Filled: public Style {
public:
  std::string getStyle() override{
    return "Filled";
  }

  virtual ~Filled(){
    std::cout << " ~Filled() called" << std::endl;
  }
};
