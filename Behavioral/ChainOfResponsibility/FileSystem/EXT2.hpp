#pragma once

#include "FileSystem.hpp"
#include <iostream>

class EXT2: public FileSystem {
public:
  bool mount(std::string data) override {
    std::cout << "Trying to mount as EXT2\t\t";
    
    if(data == "EXT2"){
      std::cout << "\33[32mSuccess\33[0m" << std::endl;
      return true;
    }
    
    std::cout << "\33[31mFail\33[0m" << std::endl;
    
    if(_next == nullptr){
      return false;
    }

    return _next->mount(data);
  }
  
  ~EXT2(){
    std::cout << " ~EXT2() called" << std::endl;
  }
};
