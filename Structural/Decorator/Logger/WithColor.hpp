#pragma once

#include "LoggerDecorator.hpp"

#include <string>
#include <iostream>
#include <memory>

class WithColor: public LoggerDecorator {
public:
  WithColor(std::shared_ptr<Logger> l): LoggerDecorator(l){}

  void log(std::string str) override {
    std::cout << "\33[36m";
    _logger->log(str);
    std::cout << "\33[0m";
  };

  ~WithColor(){
    std::cout << " ~WithColor() called" << std::endl;
  }
};
