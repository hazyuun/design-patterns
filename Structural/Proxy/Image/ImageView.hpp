#pragma once

#include "BitmapImage.hpp"
#include "Image.hpp"
#include <cstddef>
#include <iostream>
#include <memory>
#include <string>

class ImageView: public Image {
private:
  std::string _path;
  std::unique_ptr<BitmapImage> _bitmap = nullptr;
public:
  ImageView(std::string path): _path(path){
    _bitmap = nullptr;
  }
  
  void show(){
    if(_bitmap == nullptr){
      _bitmap = std::make_unique<BitmapImage>(_path);
    }
    _bitmap->show();
  }
  
  ~ImageView(){
    std::cout << " ~ImageView() called" << std::endl;
  }
};
