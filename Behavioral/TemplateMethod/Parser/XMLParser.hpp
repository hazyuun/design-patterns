#pragma once

#include "Parser.hpp"
#include <iostream>
#include <string>

class XMLParser: public Parser{
public:
  std::string parse(std::string data) override {
    std::cout << "Parsing using XMLParser" << std::endl;
    return data;
  }

  ~XMLParser(){
    std::cout << " ~XMLParser() called" << std::endl;
  }
};
