#pragma once

#include "IterableCollection.hpp"
#include "Iterator.hpp"
#include <iostream>
#include <memory>

class FirstFewEvenNumbers: public IterableCollection<uint64_t> {
  uint64_t _N = 1;

  class EvenIterator: public Iterator<uint64_t>{
  private:
    uint64_t _current = 0;
    uint64_t _count = 0;
    FirstFewEvenNumbers& _obj;
  
  public:
    EvenIterator(FirstFewEvenNumbers& obj): _obj(obj){}
    bool hasNext() override{
      return _count < _obj._N;
    }

    uint64_t getNext() override {
      ++_count;
      _current += 2;
      return _current;
    }

    ~EvenIterator(){
      std::cout << " ~EvenIterator() called" << std::endl;
    }
  };
  
public:
  FirstFewEvenNumbers(uint64_t N): _N(N){}

  std::unique_ptr<Iterator<uint64_t>> createIterator() override {
    return std::make_unique<EvenIterator>(*this);
  }
  
  virtual ~FirstFewEvenNumbers(){
    std::cout << " ~FirstFewEvenNumbers() called" << std::endl;
  }
};
