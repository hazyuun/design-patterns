#include "singleton.hpp"
#include <iostream>

int main(void){
  
  Singleton& s1 = Singleton::getInstance();
  std::cout << "50 + 50 = " << s1.add(50, 50) << std::endl;
  
  Singleton& s2 = Singleton::getInstance();
  std::cout << "100 + 100 = " << s2.add(100, 100) << std::endl;
  
  return 0;
}