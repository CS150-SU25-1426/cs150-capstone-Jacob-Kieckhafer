#include "BookList.h"
#include <iostream>

using namespace std;

bool BookList::addBook(const Book& book) {
    for (const Book& b : books) {
        if (b == book) {
            return false; // Book already exists
        }
    }
    books.push_back(book);
    return true;
}

bool BookList::deleteBook(const std::string& title, const std::string& author) {
    for (auto it = books.begin(); it != books.end(); ++it) {
        if (it->getTitle() == title && it->getAuthor() == author) {
            books.erase(it);
            return true;
        }
    }
    return false;
}

bool BookList::editBook(const std::string& title, const std::string& author, int newQuantity) {
    for (Book& b : books) {
        if (b.getTitle() == title && b.getAuthor() == author) {
            b.setQuantity(newQuantity);
            return true;
        }
    }
    return false;
}

void BookList::showAllBooks() const {
    if (books.empty()) {
        cout << "No books in inventory.\n";
        return;
    }

    for (const Book& b : books) {
        cout << b << "\n\n";
    }
}

bool BookList::operator==(const BookList& other) const {
    return books == other.books;
}

ostream& operator<<(ostream& out, const BookList& list) {
    for (const Book& b : list.books) {
        out << b << "\n\n";
    }
    return out;
}