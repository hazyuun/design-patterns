
#include "Image/ImageView.hpp"

int main(void){
  
  ImageView view = ImageView("Image.bmp");

  // Image will be loaded here then shown
  view.show();
  
  // Image will be just shown, because it's already loaded
  view.show();
  view.show();
  view.show();

  return 0;
}
