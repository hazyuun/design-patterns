#pragma once

#include "EventListener.hpp"
#include <memory>
#include <list>

class EventManager {
private:
  std::list<std::shared_ptr<EventListener>> _listeners;

public:
  void subscribe(std::shared_ptr<EventListener> l){
    _listeners.push_back(l);
  }
  
  void unsubscribe(std::shared_ptr<EventListener> l){
    _listeners.remove(l);
  }
  
  void notify(std::string msg){
    for (auto i = _listeners.begin(); i != _listeners.end(); ++i){
      i->get()->update(msg);
    }
  }

  ~EventManager(){
      std::cout << " ~EventManager() called" << std::endl;
  }
};
