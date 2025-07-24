#ifndef BOOK_H
#define BOOK_H

#include <string>

using namespace std;

class Book {
private:
    string title;
    string author;
    int quantity;

public:

    Book(string t, string a, int q);


    string getTitle() const;
    string getAuthor() const;
    int getQuantity() const;


    void setQuantity(int q);


    bool operator==(const Book& other) const;
    friend ostream& operator<<(ostream& out, const Book& book);
};

#endif