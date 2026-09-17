#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    string course;

public:
    // Constructor using 'this' pointer
    Student(int rollNo, string name, string course) {
        this->rollNo = rollNo;
        this->name = name;
        this->course = course;
    }

    void displayData() {
        cout << "\n--- Student Profile ---" << endl;
        cout << "Roll No : " << this->rollNo << endl;
        cout << "Name    : " << this->name << endl;
        cout << "Course  : " << this->course << endl;
    }
};

int main() {
    int rollNo;
    string name, course;

    cout << "Enter roll number: ";
    cin >> rollNo;
    cin.ignore();

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter course: ";
    getline(cin, course);

    Student s(rollNo, name, course);

    s.displayData();

    return 0;
}
