#pragma once

#include <iostream>
#include <string>

#include "Shape.hpp"
#include "Style.hpp"

class Circle: public Shape {
public:
  Circle(Style &style): Shape(style){}
  
  void info() const override {
    std::cout << style.getStyle() << "Circle " << std::endl;
  }

  ~Circle(){
    std::cout << " ~Circle() called" << std::endl;
  }
};
