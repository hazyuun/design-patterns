#pragma once

#include <iostream>
#include <memory>
#include <ostream>
#include <string>

class Book {
public:
  std::string title;
  std::string author;
  std::string publisher;
  
  Book(std::string title, std::string author, std::string publisher)
  : title(title), author(author), publisher(publisher){};

  ~Book(){
    std::cout << " ~Book() called" << std::endl;
  }

  std::shared_ptr<Book> clone(){
    return std::make_shared<Book>(*this);
  };

  void info() const {
    std::cout << "Book info: " 
              << "\nTitle     : " << title
              << "\nAuthor    : " << author
              << "\nPublisher : " << publisher
              << std::endl;
  };
  
};
