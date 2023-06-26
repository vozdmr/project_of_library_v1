#pragma once
#include<vector>
#include<string>
struct Book
{
    Book(std::string  litle, std::string  author, std::string  isbn);      // Constructor for Book class

    std::string title_;
    std::string author_;
    std::string isbn_;
    bool borrowed_ = false;
};

class Library
{
public:
    void addBook(const std::string& title, const std::string& author, const std::string& isbn);  // Add a book to the library
    void listBooks();                                                                           // List all the books in the library
    void borrowBook(const std::string& title);                                                 // Borrow a book from the library
    void returnBook(const std::string& title);                                                // Return a borrowed book to the library

private:
    std::vector<Book> books;
};