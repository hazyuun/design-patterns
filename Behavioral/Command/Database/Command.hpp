#pragma once

#include <iostream>

class Command {
public:
  virtual void run() = 0;
  virtual ~Command(){
    std::cout << " ~Command() called" << std::endl;
  };
};
