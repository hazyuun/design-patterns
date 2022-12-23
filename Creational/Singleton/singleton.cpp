#include "singleton.hpp"
#include <memory>
#include <iostream>

Singleton::Singleton(){
  std::cout << "Constructor called" << std::endl;
}

Singleton& Singleton::getInstance(){
  static Singleton _instance;
  return _instance;
}

int Singleton::add(int a, int b) const {
  return a + b;
}

Singleton::~Singleton(){
  std::cout << "Destructor called" << std::endl;
}
