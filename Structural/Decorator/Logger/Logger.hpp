#pragma once

#include <string>
#include <iostream>

class Logger {
public:
  virtual void log(std::string str) = 0;
  virtual ~Logger(){
    std::cout << " ~Logger() called" << std::endl;
  }
};
