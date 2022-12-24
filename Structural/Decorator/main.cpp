
#include "Logger/Logger.hpp"
#include "Logger/StdoutLogger.hpp"
#include "Logger/WithDateTime.hpp"
#include "Logger/WithColor.hpp"

#include <memory>

int main(void){
  
  std::shared_ptr<Logger> stdoutLogger = nullptr;
  std::shared_ptr<Logger> coloredLogger = nullptr;
  std::shared_ptr<Logger> dateTimeLogger = nullptr;
  std::shared_ptr<Logger> coloredDateTimeLogger = nullptr;

  stdoutLogger = std::make_shared<StdoutLogger>();
  coloredLogger = std::make_shared<WithColor>(stdoutLogger);
  dateTimeLogger = std::make_shared<WithDateTime>(stdoutLogger);
  coloredDateTimeLogger = std::make_shared<WithColor>(dateTimeLogger);

  stdoutLogger->log("Hello from simple logger");
  coloredLogger->log("Hello from colored logger");
  dateTimeLogger->log("Hello from date time logger");
  coloredDateTimeLogger->log("Hello from colored date time logger");
  
  return 0;
}
