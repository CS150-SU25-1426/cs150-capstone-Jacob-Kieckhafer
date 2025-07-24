#include <iostream>
#include "Book.h"

using namespace std;

int main() {

    Book book1("The Great Gatsby", "F. Scott Fitzgerald", 5);
    Book book2("The Great Gatsby", "F. Scott Fitzgerald", 5);
    Book book3("1984", "George Orwell", 3);

    cout << "Book 1:\n" << book1 << "\n\n";
    cout << "Book 2:\n" << book2 << "\n\n";
    cout << "Book 3:\n" << book3 << "\n\n";


    if (book1 == book2) {
        cout << "Book 1 and Book 2 are the same.\n";
    } else {
        cout << "Book 1 and Book 2 are different.\n";
    }

    if (book1 == book3) {
        cout << "Book 1 and Book 3 are the same.\n";
    } else {
        cout << "Book 1 and Book 3 are different.\n";
    }

    return 0;
}