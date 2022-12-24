#pragma once

#include <string>
#include <iostream>

class Style {
public:
  virtual std::string getStyle() = 0;
  virtual ~Style(){
    std::cout << " ~Style() called" << std::endl;
  }
};
