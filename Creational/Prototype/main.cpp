
#include "Book.hpp"
#include <memory>
int main(void){
  
  Book book1 = Book("Some book", "Some author", "Some publisher");
  book1.info();
  
  std::shared_ptr<Book> book2 = book1.clone();
  book2->title = "Another book";

  std::shared_ptr<Book> book3 = book1.clone();
  book3->title = "A new book";
  
  book2->info();
  book3->info();
  
  return 0;
}