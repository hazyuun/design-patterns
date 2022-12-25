#pragma once

#include "Iterator.hpp"
#include <iostream>
#include <memory>

template<typename T>
class IterableCollection {
public:
  virtual std::unique_ptr<Iterator<T>> createIterator() = 0;
  
  virtual ~IterableCollection(){
    std::cout << " ~IterableCollection() called" << std::endl;
  }
};
