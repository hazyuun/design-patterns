#pragma once

#include <string>
#include <iostream>

#include "Style.hpp"

class Shape {
protected:
  Style &style;

public:
  Shape(Style &style): style(style){}
 
  virtual void info() const = 0;
 
  virtual ~Shape(){
    std::cout << " ~Shape() called" << std::endl;
  }
};
