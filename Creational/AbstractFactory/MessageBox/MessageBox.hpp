#pragma once

#include <string>
#include <iostream>

class MessageBox {
public:
  virtual void show(std::string title, std::string message) const = 0;
  virtual ~MessageBox(){
    std::cout << " ~MessageBox() called"
              << "\33[0m"
              << std::endl;
  }
};