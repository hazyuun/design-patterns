#pragma once

#include <iostream>
#include <string>

#include "Shape.hpp"
#include "Style.hpp"

class Square: public Shape {
public:
  Square(Style &style): Shape(style){}
  
  void info() const override {
    std::cout << style.getStyle() << "Square " << std::endl;
  }
  
  ~Square(){
    std::cout << " ~Square() called" << std::endl;
  }
};
