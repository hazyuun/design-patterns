#pragma once

#include "Shape.hpp"
#include <iostream>

class CircularShape {
private:
  float radius;
public:
  CircularShape(float r): radius(r){};
  ~CircularShape(){
    std::cout << " ~CircularShape() called" << std::endl;
  };

  float getSurfaceArea() {
    return 3.14 * radius * radius; 
  };
};
