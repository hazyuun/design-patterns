#pragma once

#include <iostream>

#include "Shape.hpp"

class Circle: public Shape {
public:
  void draw() const override{
    std::cout << "Circle: O" << std::endl;
  }
  
  ~Circle(){
    std::cout << " ~Circle() called" << std::endl;
  }
};
