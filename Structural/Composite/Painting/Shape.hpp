#pragma once

#include "BrushStroke.hpp"
#include "Painting.hpp"
#include <iostream>
#include <memory>
#include <string>
#include <vector>

class Shape: public Painting {
private:
  std::vector<std::shared_ptr<Painting>> _components;
public:
  Shape(std::string description): Painting(description){}
  
  void addComponent(std::shared_ptr<Painting> component){
    _components.push_back(component);
  }

  void draw() override {
    std::cout << "Started Drawing Shape: " << _description << std::endl;
    for(uint32_t i = 0; i < _components.size(); i++){
      _components[i]->draw();
    }
    std::cout << "Finished drawing Shape: " << _description << std::endl;
  }
  
  ~Shape(){
    std::cout << " ~Shape() called" << std::endl;
  }
};
