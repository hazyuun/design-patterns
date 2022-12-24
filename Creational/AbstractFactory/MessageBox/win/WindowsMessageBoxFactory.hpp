#pragma once

#include <memory>

#include "WindowsMessageBox.hpp"
#include "../AbstractMessageBoxFactory.hpp"

class WindowsMessageBoxFactory: public AbstractMessageBoxFactory {
public:
  std::unique_ptr<MessageBox> createRedMessageBox(void) const override {
    return std::make_unique<WindowsMessageBox>("\33[31m");
  }
  
  std::unique_ptr<MessageBox> createGreenMessageBox(void) const override {
    return std::make_unique<WindowsMessageBox>("\33[32m");
  }
  
  std::unique_ptr<MessageBox> createBlueMessageBox(void) const override {
    return std::make_unique<WindowsMessageBox>("\33[36m");
  }
};
