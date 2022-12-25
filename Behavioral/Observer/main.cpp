
#include "Events/EventManager.hpp"
#include <iostream>

int main(void){
  EventManager manager;
  
  auto listener1 = std::make_shared<EventListener>(
    [=](std::string msg){
      std::cout << "Listener 1 got Notified: " << msg << std::endl;
    }
  );
  manager.subscribe(listener1);


  auto listener2 = std::make_shared<EventListener>(
    [=](std::string msg){
      std::cout << "Listener 2 got Notified: " << msg << std::endl;
    }
  );
  manager.subscribe(listener2);

  manager.notify("Hello !");
  manager.unsubscribe(listener2);
  manager.notify("Hello listener 1 !");

  return 0;
}
