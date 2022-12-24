#pragma once

#include "CircularShape.hpp"

class CircularShapeAdapter: public Shape {
private:
  CircularShape& c;

public:
  CircularShapeAdapter(CircularShape& c): c(c){};
  ~CircularShapeAdapter(){
    std::cout << " ~CircularShapeAdapter() called" << std::endl;
  };

  float getArea() override {
    return c.getSurfaceArea();
  }
};
