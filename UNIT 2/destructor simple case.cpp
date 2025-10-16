#include <iostream>
using namespace std;

class Book {
    string title;
    string author;

public:
    // Constructor
    Book(string t, string a) {
        title = t;      // Use lowercase member variable names
        author = a;
        cout << "Constructor called: Book object created" << endl;
    }

    // Display function
    void display() {
        cout << "Book Title: " << title << endl;
        cout << "Author: " << author << endl;
    }

    // Destructor
    ~Book() {
        cout << "Destructor called: Book object destroyed" << endl;
    }
};

int main() {
    // Strings should be in quotes
    Book b("Bahubali", "SS.Rajmouli");

    // You created object 'b', so call display on 'b'
    b.display();

    return 0;
}

