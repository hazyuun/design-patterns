#pragma once

#include <iostream>

#include "Shape.hpp"

class Circle: public Shape {
private:
  float radius;
public:
  Circle(float r): radius(r){};
  ~Circle(){
    std::cout << " ~Circle() called" << std::endl;
  };

  float getArea() override {
    return 3.14 * radius * radius; 
  };
};
