
#include <iostream>
#include <memory>
#include "Database/Command.hpp"
#include "Database/Insert.hpp"
#include "Database/Delete.hpp"


int main(void){
  std::shared_ptr<Command> cmd1 = std::make_shared<Insert>();
  std::shared_ptr<Command> cmd2 = std::make_shared<Delete>();
  
  cmd1->run();
  cmd2->run();
  
  return 0;
}
