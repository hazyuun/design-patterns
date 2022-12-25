#pragma once

#include <string>
#include <iostream>

class Painting {
protected:
  std::string _description;

public:
  Painting(std::string description): _description(description){}
  virtual void draw() = 0;
  virtual ~Painting(){
    std::cout << " ~Painting() called" << std::endl;
  }
};
