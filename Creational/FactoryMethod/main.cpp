#include "Shape/Circle.hpp"
#include "Shape/Shape.hpp"
#include <memory>

int main(void){
  std::unique_ptr<Shape> c = Shape::create(CIRCLE);
  std::unique_ptr<Shape> s = Shape::create(SQUARE);

  c->draw();
  s->draw();

  return 0;
}