#include "Book.h"
#include <iostream>

using namespace std;

Book::Book(string t, string a, int q) {
    title = t;
    author = a;
    quantity = q;
}

string Book::getTitle() const {
    return title;
}

string Book::getAuthor() const {
    return author;
}

int Book::getQuantity() const {
    return quantity;
}

void Book::setQuantity(int q) {
    quantity = q;
}

bool Book::operator==(const Book& other) const {
    return (title == other.title && author == other.author);
}

ostream& operator<<(ostream& out, const Book& book) {
    out << "Title: " << book.title << "\nAuthor: " << book.author
        << "\nQuantity: " << book.quantity;
    return out;
}