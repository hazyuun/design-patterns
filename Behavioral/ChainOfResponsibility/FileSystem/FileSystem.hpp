#pragma once

#include <memory>
#include <string>
#include <iostream>

class FileSystem {
protected:
  std::shared_ptr<FileSystem> _next = nullptr;
public:
  FileSystem(){}
  FileSystem(std::shared_ptr<FileSystem> next): _next(next){}
  
  void setNext(std::shared_ptr<FileSystem> next){
    _next = next;
  };

  virtual bool mount(std::string data) = 0;
  
  virtual ~FileSystem(){
    std::cout << " ~FileSystem() called" << std::endl;
  }
};
