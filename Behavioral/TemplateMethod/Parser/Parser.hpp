#pragma once

#include <iostream>
#include <string>

class Parser{
public:
  virtual ~Parser(){
    std::cout << " ~Parser() called" << std::endl;
  }

  virtual std::string run(std::string file) final {
    std::string opened = open(file);
    std::string parsed = parse(file);
    close(file);
    return parsed;
  }

private:
  virtual std::string open(std::string file) final {
    std::cout << "Opening file: " << file << std::endl;
    return file;
  }

  virtual void close(std::string file) final {
    std::cout << "Closing file: " << file << std::endl;
  }

protected:
  virtual std::string parse(std::string data) = 0;
};
