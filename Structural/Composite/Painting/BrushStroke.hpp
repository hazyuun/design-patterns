#pragma once

#include "Painting.hpp"
#include <iostream>
#include <string>

class BrushStroke: public Painting {

public:
  BrushStroke(std::string description): Painting(description){}
  
  void draw() override {
    std::cout << "Drawing brush stroke: " << _description << std::endl;
  }

  ~BrushStroke(){
    std::cout << " ~BrushStroke() called" << std::endl;
  }
};
