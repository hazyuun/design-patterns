
#include "Shape/Circle.hpp"
#include "Shape/ShapeSurfacePrinter.hpp"
#include "Shape/CircularShape.hpp"
#include "Shape/CircularShapeAdapter.hpp"

int main(void){
  ShapeSurfacePrinter printer;

  Circle c1 = Circle(2);
  printer.print(c1);

  CircularShape c2 = CircularShape(3);
  CircularShapeAdapter adaptedC2 = CircularShapeAdapter(c2);
  printer.print(adaptedC2);
  
  return 0;
}
