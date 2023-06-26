#include<iostream>
#include<vector>
#include"library_project.h"


// Constructor for Book class
Book::Book(std::string  litle, std::string  author, std::string  isbn) :title_{ litle }, author_{ author }, isbn_{ isbn } {}

void Library::addBook(const std::string& title, const std::string& author, const std::string& isbn)
{
    Book newBook(title, author, isbn);
    books.push_back(newBook);
    std::cout << "Book added: " << title << " - " << author << '\n';
}

void Library::listBooks()    // List all the books in the library                                   
{
    std::cout << "\nBooks in the Library:" << '\n';
    for (const auto& book : books)
    {
        std::cout << "\nTitle: " << book.title_ << '\n';
        std::cout << "Author: " << book.author_ << '\n';
        std::cout << "ISBN-13: " << book.isbn_ << '\n';
        std::cout << "Status: ";

        if (book.borrowed_)
        {
            std::cout << "Book is Borrowed" << '\n';
        }
        else
        {
            std::cout << "Book is Available" << '\n';
        }
        std::cout << "-----------------------" << '\n';
    }
}

void Library::borrowBook(const std::string& title)    // Borrow a book from the library
{
    for (auto& book : books)
    {
        if (book.title_ == title)
        {
            if (book.borrowed_)
            {
                std::cout << "This book is already borrowed." << '\n';
            }
            else
            {
                book.borrowed_ = true;
                std::cout << "Book '" << title << "' is borrowed." << '\n';
            }
            return;
        }
    }
    std::cout << "This book does not exist in the library." << '\n';
}

void Library::returnBook(const std::string& title)  // Return a borrowed book to the library
{
    for (auto& book : books)
    {
        if (book.title_ == title)
        {
            if (book.borrowed_)
            {
                book.borrowed_ = false;
                std::cout << "Book '" << title << "' returned." << '\n';
            }
            else {
                std::cout << "This book is already in the library." << '\n';
            }
            return;
        }
    }
    std::cout << "This book does not exist in the library." << '\n';
}
