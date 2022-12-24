#pragma once

#include "Logger.hpp"
#include <memory>

class LoggerDecorator: public Logger {
protected:
  std::shared_ptr<Logger> _logger;
public:
  LoggerDecorator(std::shared_ptr<Logger> l): _logger(l){}
  ~LoggerDecorator(){
    std::cout << " ~LoggerDecorator() called" << std::endl;
  }
};
