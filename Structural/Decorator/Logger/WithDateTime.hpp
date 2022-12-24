#pragma once

#include "Logger.hpp"
#include "LoggerDecorator.hpp"

#include <string>
#include <chrono>
#include <ctime>
#include <iostream>
#include <iomanip>
#include <memory>

class WithDateTime: public LoggerDecorator {
public:
  WithDateTime(std::shared_ptr<Logger> l): LoggerDecorator(l){}

  void log(std::string str) override {
    auto now = std::chrono::system_clock::now();
    auto t = std::chrono::system_clock::to_time_t(now);
    auto gmt = gmtime(&t);
    auto timeString = std::put_time(gmt, "%Y-%m-%d %H:%M:%S");
    
    std::cout << timeString << " - ";
    _logger->log(str);
  };

  ~WithDateTime(){
    std::cout << " ~WithDateTime() called" << std::endl;
  }
};
