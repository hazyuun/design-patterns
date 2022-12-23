#pragma once
#include <memory>

class Singleton {
public:
  static Singleton& getInstance();
  int add(int a, int b) const;

private:
  Singleton();
  Singleton(const Singleton&) = delete;
  Singleton& operator = (const Singleton&) = delete;
  ~Singleton();
};
