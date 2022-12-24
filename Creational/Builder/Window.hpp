#pragma once

#include <cstdint>
#include <iostream>
#include <memory>
#include <string>

class Window {
private:
  uint32_t x, y;
  uint32_t width, height;
  std::string title, content;
  
  friend class WindowBuilder;

public:
  ~Window(){
    std::cout << " ~Window() called" << std::endl;
  }
  void info(){
    std::cout << "Window Infos\n"
              << "(x, y)  = (" << x << ", " << y << ")\n"
              << "(w, h)  = (" << width << ", " << height << ")\n"
              << "title   = " << title << "\n"
              << "content = " << content
              << std::endl;
  }
};

class WindowBuilder {
  std::unique_ptr<Window> _window = nullptr;

public:
  WindowBuilder(){
    _window.reset(new Window);
  }

  ~WindowBuilder(){
    std::cout << " ~WindowBuilder() called" << std::endl;
  };

  WindowBuilder& setCoordinates(uint32_t x, uint32_t y){
    _window->x = x;
    _window->y = y;
    return *this;
  };

  WindowBuilder& setDimensions(uint32_t width, uint32_t height){
    _window->width = width;
    _window->height = height;
    return *this;
  };
  
  WindowBuilder& setTitle(std::string title){
    _window->title = title;
    return *this;
  };

  WindowBuilder& setContent(std::string content){
    _window->content = content;
    return *this;
  };
  
  std::unique_ptr<Window> build(){
    return std::move(_window);
  };
};
