#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    double price;
    int pages;

public:
    void getData() {
        cout << "Enter book title: ";
        getline(cin, title);

        cout << "Enter author name: ";
        getline(cin, author);

        cout << "Enter price: ";
        cin >> price;

        cout << "Enter number of pages: ";
        cin >> pages;
    }

    void displayData() {
        cout << "\n--- Book Details ---" << endl;
        cout << "Title  : " << title << endl;
        cout << "Author : " << author << endl;
        cout << "Price  : " << price << endl;
        cout << "Pages  : " << pages << endl;
    }
};

int main() {
    Book b;

    b.getData();
    b.displayData();

    return 0;
}
