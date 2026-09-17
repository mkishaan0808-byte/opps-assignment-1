#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    string course;
    float marks;

public:
    void getData() {
        cout << "Enter roll number: ";
        cin >> rollNo;
        cin.ignore();

        cout << "Enter student name: ";
        getline(cin, name);

        cout << "Enter course: ";
        getline(cin, course);

        cout << "Enter marks: ";
        cin >> marks;
    }

    void displayData() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Roll No : " << rollNo << endl;
        cout << "Name    : " << name << endl;
        cout << "Course  : " << course << endl;
        cout << "Marks   : " << marks << endl;
    }
};

int main() {
    Student s;

    s.getData();
    s.displayData();

    return 0;
}
