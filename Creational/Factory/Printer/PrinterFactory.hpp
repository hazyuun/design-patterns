#pragma once

#include <memory>

#include "RedPrinter.hpp"
#include "GreenPrinter.hpp"
#include "BluePrinter.hpp"

class PrinterFactory {
public:
  std::unique_ptr<RedPrinter> createRedPrinter(void) const {
    return std::make_unique<RedPrinter>();
  }
  
  std::unique_ptr<GreenPrinter> createGreenPrinter(void) const {
    return std::make_unique<GreenPrinter>();
  }
  
  std::unique_ptr<BluePrinter> createBluePrinter(void) const {
    return std::make_unique<BluePrinter>();
  }
};
