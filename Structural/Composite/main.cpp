
#include "Painting/BrushStroke.hpp"
#include "Painting/Painting.hpp"
#include "Painting/Shape.hpp"
#include <memory>

int main(void){
  
  auto tree = std::make_shared<Shape>("tree");
  auto trunk = std::make_shared<BrushStroke>("trunk");
  auto leaves = std::make_shared<BrushStroke>("leaves");

  tree->addComponent(trunk);
  tree->addComponent(leaves);

  auto artwork = std::make_shared<Shape>("artwork");
  auto apple = std::make_shared<BrushStroke>("apple");

  artwork->addComponent(tree);
  artwork->addComponent(apple);
  
  artwork->draw();
  
  return 0;
}
