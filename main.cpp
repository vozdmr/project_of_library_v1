#include <iostream>
#include <vector>
#include"library_project.h"

int main() {
    Library library;
    library.addBook("The C++ Programming Language", "Bjarne Stroustrup", "9780132350884");
    library.addBook("C++ Concurrency in Action: Practical Multithreading", "Anthony Williams", "9781408855652");
    library.addBook("Effective Modern C++", "Scott Meyers", "9781505337097");
    library.addBook("C++ Standard Library: A Tutorial and Reference", "Nicolai M. Josuttis", "9780451524935");

    library.listBooks();

    library.borrowBook("C++ Concurrency in Action: Practical Multithreading");
    library.borrowBook("The C++ Programming Language");

    library.listBooks();

    library.returnBook("C++ Concurrency in Action: Practical Multithreading");

    library.listBooks();

    return 0;
}
