#pragma once

#include "FileSystem.hpp"
#include <cstddef>
#include <iostream>
#include <memory>
#include <string>

class FileSystemManager {
  std::shared_ptr<FileSystem> _root = nullptr;
public:
  FileSystemManager(){}
  FileSystemManager(std::shared_ptr<FileSystem> root): _root(root){}
  
  void registerFileSystem(std::shared_ptr<FileSystem> fs){
    if(_root == nullptr){
      _root = fs;
      return;
    }
    fs->setNext(_root);
    _root = fs;
  };

  bool mount(std::string data) {
    bool r = _root->mount(data);
    if(!r) std::cout << "\33[31mUnknown file system\33[0m" << std::endl;
    return r;
  }

  ~FileSystemManager(){
    std::cout << " ~FileSystemManager() called" << std::endl;
  }
};
