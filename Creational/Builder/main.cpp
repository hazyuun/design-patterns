#include "Window.hpp"
#include <cstddef>
#include <memory>

int main(void){
  WindowBuilder builder;

  std::unique_ptr<Window> w = nullptr;

  w = builder.setTitle("Title")
             .setContent("Content")
             .setCoordinates(123, 456)
             .setDimensions(1024, 768)
             .build();

  w->info();
  
  return 0;
}