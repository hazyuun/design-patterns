

#include "FileSystem/EXT2.hpp"
#include "FileSystem/FAT.hpp"
#include "FileSystem/FileSystemManager.hpp"
#include <memory>

int main(void){

  FileSystemManager fs;

  fs.registerFileSystem(std::make_shared<EXT2>());
  fs.registerFileSystem(std::make_shared<FAT>());
  
  std::cout << "== Test with FAT ==" << std::endl;
  fs.mount("FAT");

  std::cout << "\n== Test with EXT2 ==" << std::endl;
  fs.mount("EXT2");
  
  std::cout << "\n== Test with Unknown ==" << std::endl;
  fs.mount("Unknown");
  
  
  return 0;
}
