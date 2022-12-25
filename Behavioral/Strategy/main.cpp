
#include "Factorial/Factorial.hpp"
#include "Factorial/LoopFactorial.hpp"
#include "Factorial/RecursiveFactorial.hpp"

#include <iostream>
#include <memory>

int main(void){
  std::shared_ptr<Factorial> f1, f2;

  f1 = std::make_shared<LoopFactorial>();
  f2 = std::make_shared<RecursiveFactorial>();
  
  std::cout << "Using loop      : 50! = " << f1->compute(50) << std::endl;
  std::cout << "Using recursive : 50! = " << f2->compute(50) << std::endl;
  
  return 0;
}
