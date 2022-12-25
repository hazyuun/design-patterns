#pragma once

#include <iostream>
#include <string>

class Image {

public:
  virtual void show() = 0;
  
  virtual ~Image(){
    std::cout << " ~Image() called" << std::endl;
  }
};
