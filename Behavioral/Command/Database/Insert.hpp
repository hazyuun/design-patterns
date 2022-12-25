#pragma once

#include <iostream>
#include "Command.hpp"

class Insert: public Command {
public:
  void run() override {
    std::cout << "Running insert command" << std::endl;
  }

  ~Insert(){
    std::cout << " ~Insert() called" << std::endl;
  };
};
