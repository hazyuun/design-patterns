#pragma once

#include <iostream>
#include <string>

#include "../MessageBox.hpp"

class LinuxMessageBox: public MessageBox {
private:
  const std::string _ansi_color;

public:
  LinuxMessageBox(std::string color): _ansi_color(color){}

  void show(std::string title, std::string message) const override {
    std::cout << _ansi_color 
              << "[Linux]"
              << "\ttitle = " << title 
              << "\tmessage = " << message 
              << "\33[0m"
              << std::endl;
  }

  ~LinuxMessageBox(){
    std::cout << _ansi_color 
              << " ~LinuxMessageBox() called"
              << "\33[0m"
              << std::endl;
  }
};