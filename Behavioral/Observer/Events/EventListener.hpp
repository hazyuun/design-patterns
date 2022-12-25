#pragma once

#include <string>
#include <functional>
#include <iostream>

class EventListener {
  
protected:
  typedef std::function<void(std::string)> EventCallback;
  EventCallback _callback;

public:
  EventListener(EventCallback f){
    _callback = f;
  }

  void update(std::string message){
    _callback(message);
  }

  ~EventListener(){
    std::cout << " ~EventListener() called" << std::endl;
  }
};
