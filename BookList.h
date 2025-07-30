#ifndef BOOKLIST_H
#define BOOKLIST_H

#include <vector>
#include "Book.h"

class BookList {
private:
    std::vector<Book> books;

public:
    bool addBook(const Book& book);
    bool deleteBook(const std::string& title, const std::string& author);
    bool editBook(const std::string& title, const std::string& author, int newQuantity);
    void showAllBooks() const;

    bool operator==(const BookList& other) const;
    friend std::ostream& operator<<(std::ostream& out, const BookList& list);
};

#endif