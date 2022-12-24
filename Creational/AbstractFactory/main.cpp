#include "MessageBox/AbstractMessageBoxFactory.hpp"
#include "MessageBox/win/WindowsMessageBoxFactory.hpp"
#include "MessageBox/linux/LinuxMessageBoxFactory.hpp"

#include <memory>
#include <string>

enum OS {
  WIN, LINUX, OTHER
};

int main(void){
  enum OS os = WIN;

  std::unique_ptr<AbstractMessageBoxFactory> factory = nullptr;
  
  if(os == OTHER){
    std::cerr << "Unsupported OS" << std::endl;
    return 1;
  } 
  
  if (os == WIN) {
    factory = std::make_unique<WindowsMessageBoxFactory>();
  } else if (os == LINUX) {
    factory = std::make_unique<LinuxMessageBoxFactory>();
  }

  std::unique_ptr<MessageBox> r, g, b;
  r = factory->createRedMessageBox();
  g = factory->createGreenMessageBox();
  b = factory->createBlueMessageBox();
  
  r->show("Example", "Red");
  g->show("Example", "Green");
  b->show("Example", "Blue");
  
  return 0;
}