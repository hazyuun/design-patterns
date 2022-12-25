#pragma once

#include "Parser.hpp"
#include <iostream>
#include <string>

class JSONParser: public Parser{
public:
  std::string parse(std::string data) override {
    std::cout << "Parsing using JSONParser" << std::endl;
    return data;
  }
  
  ~JSONParser(){
    std::cout << " ~JSONParser() called" << std::endl;
  }
};
