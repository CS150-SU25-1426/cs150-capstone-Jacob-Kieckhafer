#include <iostream>
#include "BookList.h"

using namespace std;

void showMenu() {
    cout << "\nBook Inventory Menu:\n";
    cout << "1. Add Book\n";
    cout << "2. Edit Book Quantity\n";
    cout << "3. Delete Book\n";
    cout << "4. Show All Books\n";
    cout << "5. Exit\n";
    cout << "Choose an option (1-5): ";
}

int main() {
    BookList inventory;
    int choice;

    do {
        showMenu();
        cin >> choice;
        cin.ignore();  // Clear newline from buffer

        string title, author;
        int quantity;

        switch (choice) {
            case 1:
                cout << "Enter title: ";
                getline(cin, title);
                cout << "Enter author: ";
                getline(cin, author);
                cout << "Enter quantity: ";
                cin >> quantity;
                if (inventory.addBook(Book(title, author, quantity))) {
                    cout << "Book added.\n";
                } else {
                    cout << "Book already exists.\n";
                }
                break;

            case 2:
                cout << "Enter title to edit: ";
                getline(cin, title);
                cout << "Enter author: ";
                getline(cin, author);
                cout << "Enter new quantity: ";
                cin >> quantity;
                if (inventory.editBook(title, author, quantity)) {
                    cout << "Book updated.\n";
                } else {
                    cout << "Book not found.\n";
                }
                break;

            case 3:
                cout << "Enter title to delete: ";
                getline(cin, title);
                cout << "Enter author: ";
                getline(cin, author);
                if (inventory.deleteBook(title, author)) {
                    cout << "Book deleted.\n";
                } else {
                    cout << "Book not found.\n";
                }
                break;

            case 4:
                inventory.showAllBooks();
                break;

            case 5:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while (choice != 5);

    return 0;
}