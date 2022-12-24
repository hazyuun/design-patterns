#pragma once

#include <memory>
#include <iostream>

enum ShapeType {
  CIRCLE, SQUARE
};

class Shape {
public:
  static std::unique_ptr<Shape> create(enum ShapeType type);
  
  virtual void draw() const = 0;
  virtual ~Shape(){
    std::cout << " ~Shape() called" << std::endl;
  }
};

