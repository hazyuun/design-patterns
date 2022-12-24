#pragma once

#include <iostream>
#include <string>

#include "../MessageBox.hpp"

class WindowsMessageBox: public MessageBox {
private:
  const std::string _ansi_color;

public:
  WindowsMessageBox(std::string color): _ansi_color(color){}

  void show(std::string title, std::string message) const override {
    std::cout << _ansi_color 
              << "[Windows]"
              << "\ttitle = " << title 
              << "\tmessage = " << message 
              << "\33[0m"
              << std::endl;
  }

  ~WindowsMessageBox(){
    std::cout << _ansi_color 
              << " ~WindowsMessageBox() called"
              << "\33[0m"
              << std::endl;
  }
};