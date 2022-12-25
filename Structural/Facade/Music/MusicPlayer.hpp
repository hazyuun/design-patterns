#pragma once

#include <iostream>
#include <string>

class MusicPlayer {
public:
  void play(std::string path){
    // Check if path is valid
    // Open the file
    // Read the file
    // Get info about the file format
    // Read the data
    // etc.

    std::cout << "Playing: " << path << std::endl;
  }

  ~MusicPlayer(){
    std::cout << " ~MusicPlayer() called" << std::endl;
  }
};
