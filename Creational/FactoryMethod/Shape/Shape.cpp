#include <cassert>
#include "Circle.hpp"
#include "Square.hpp"

std::unique_ptr<Shape> Shape::create(enum ShapeType type){
  switch (type) {
  case CIRCLE: return std::make_unique<Circle>();
  case SQUARE: return std::make_unique<Square>();
  }
  
  /* Unreachable */
  assert(false);
  return nullptr;
}
