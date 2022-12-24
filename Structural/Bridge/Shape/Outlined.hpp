#pragma once

#include <string>
#include <iostream>

#include "Style.hpp"

class Outlined: public Style {
public:
  std::string getStyle() override{
    return "Outlined";
  }

  virtual ~Outlined(){
    std::cout << " ~Outlined() called" << std::endl;
  }
};
