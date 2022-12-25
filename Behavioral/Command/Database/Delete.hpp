#pragma once

#include <iostream>
#include "Command.hpp"

class Delete: public Command {
public:
  void run() override {
    std::cout << "Running delete command" << std::endl;
  }

  ~Delete(){
    std::cout << " ~Delete() called" << std::endl;
  };
};
