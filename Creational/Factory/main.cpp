#include "Printer/BluePrinter.hpp"
#include "Printer/PrinterFactory.hpp"
#include "Printer/RedPrinter.hpp"
#include "Printer/GreenPrinter.hpp"
#include <memory>


int main(void){
  PrinterFactory factory;

  std::unique_ptr<RedPrinter>   r = factory.createRedPrinter();
  std::unique_ptr<GreenPrinter> g = factory.createGreenPrinter();
  std::unique_ptr<BluePrinter>  b = factory.createBluePrinter();
  
  r->print("Red ");
  g->print("Green ");
  b->print("Blue ");
  
  return 0;
}
