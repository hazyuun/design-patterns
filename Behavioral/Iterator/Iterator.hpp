#pragma once

#include <iostream>

template<typename T>
class Iterator {
public:
  virtual bool hasNext() = 0;
  virtual T getNext() = 0;
  
  virtual ~Iterator(){
    std::cout << " ~Iterator() called" << std::endl;
  }
};
