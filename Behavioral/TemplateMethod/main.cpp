
#include "Parser/JSONParser.hpp"
#include "Parser/XMLParser.hpp"
#include <iostream>
#include <memory>

int main(void){
  JSONParser json = JSONParser();
  XMLParser xml = XMLParser();
  
  json.run("data.json");
  xml.run("data.xml");

  return 0;
}
