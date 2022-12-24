#pragma once

#include <iostream>

#include "Circle.hpp"

class ShapeSurfacePrinter {
public:
  ShapeSurfacePrinter(){}
  ~ShapeSurfacePrinter(){
    std::cout << " ~ShapeSurfacePrinter() called" << std::endl;
  }
  
  void print(Shape& c){
    std::cout << "Shape has surface=" << c.getArea() << std::endl;
  }
};
