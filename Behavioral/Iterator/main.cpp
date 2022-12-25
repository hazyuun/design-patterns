
#include "PrimeNumbers.hpp"
#include <iostream>
#include <memory>


int main(void){
  FirstFewEvenNumbers even(20);
  auto it = even.createIterator();

  while (it->hasNext()) {
    std::cout << it->getNext() << std::endl;
  }

  return 0;
}
