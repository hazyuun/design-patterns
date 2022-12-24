#pragma once

#include "Logger.hpp"

#include <string>
#include <iostream>

class StdoutLogger: public Logger {
public:
  void log(std::string str) override {
    std::cout << str << std::endl;
  };

  ~StdoutLogger(){
    std::cout << " ~StdoutLogger() called" << std::endl;
  }
};
