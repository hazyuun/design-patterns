
#include "Shape/Circle.hpp"
#include "Shape/Square.hpp"
#include "Shape/Outlined.hpp"
#include "Shape/Filled.hpp"

int main(void){
  
  Filled filled = Filled();
  Outlined outlined = Outlined();

  Circle c1 = Circle(filled);
  Circle c2 = Circle(outlined);
  Square s1 = Square(filled);
  Square s2 = Square(outlined);
  
  c1.info();
  c2.info();
  s1.info();
  s2.info();
  
  return 0;
}
