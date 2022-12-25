#pragma once

#include "Image.hpp"
#include <iostream>
#include <string>

class BitmapImage: public Image {
private:
  std::string _path;
public:
  BitmapImage(std::string path): _path(path){
    std::cout << "Loading BitmapImage: " << path << std::endl;
  }
  
  void show(){
    std::cout << "Showing BitmapImage: " << _path << std::endl;
  }
  
  ~BitmapImage(){
    std::cout << " ~BitmapImage() called" << std::endl;
  }
};
