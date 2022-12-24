#pragma once

#include <iostream>

class Shape {
public:
  virtual float getArea() = 0;
  virtual ~Shape(){
    std::cout << " ~Shape() called" << std::endl;
  };
};
