#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    double price;

public:
    // Default constructor
    Book() {
        title = "Unknown";
        author = "Unknown";
        price = 0.0;
    }

    // Parameterized constructor
    Book(string t, string a, double p) {
        title = t;
        author = a;
        price = p;
    }

    void displayData() {
        cout << "Title  : " << title << endl;
        cout << "Author : " << author << endl;
        cout << "Price  : " << price << endl;
        cout << "------------------------" << endl;
    }
};

int main() {
    // Object created using default constructor
    Book book1;

    // Object created using parameterized constructor
    Book book2("The Alchemist", "Paulo Coelho", 399.00);

    cout << "--- Book 1 (Default Constructor) ---" << endl;
    book1.displayData();

    cout << "--- Book 2 (Parameterized Constructor) ---" << endl;
    book2.displayData();

    return 0;
}
