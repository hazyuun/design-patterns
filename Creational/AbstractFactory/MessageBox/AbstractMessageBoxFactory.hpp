#pragma once

#include "MessageBox.hpp"
#include <memory>

class AbstractMessageBoxFactory {
public:
  virtual std::unique_ptr<MessageBox> createRedMessageBox(void) const = 0;
  virtual std::unique_ptr<MessageBox> createGreenMessageBox(void) const = 0;
  virtual std::unique_ptr<MessageBox> createBlueMessageBox(void) const = 0;
  virtual ~AbstractMessageBoxFactory(){}
};
