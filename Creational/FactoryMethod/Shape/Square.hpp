#pragma once

#include <iostream>

#include "Shape.hpp"

class Square: public Shape {
public:
  void draw() const override{
    std::cout << "Square: [ ]" << std::endl;
  }

  ~Square(){
    std::cout << " ~Square() called" << std::endl;
  }
};
