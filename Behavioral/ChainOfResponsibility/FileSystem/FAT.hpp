#pragma once

#include "FileSystem.hpp"
#include <iostream>

class FAT: public FileSystem {
public:
  bool mount(std::string data) override {
    std::cout << "Trying to mount as FAT\t\t";
    
    if(data == "FAT"){
      std::cout << "\33[32mSuccess\33[0m" << std::endl;
      return true;
    }
    
    std::cout << "\33[31mFail\33[0m" << std::endl;
    
    if(_next == nullptr){
      return false;
    }

    return _next->mount(data);
  }
  
  ~FAT(){
    std::cout << " ~FAT() called" << std::endl;
  }
};
