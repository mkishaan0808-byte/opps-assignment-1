#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int employeeId;
    string name;
    string department;
    double salary;

public:
    void getData() {
        cout << "Enter employee ID: ";
        cin >> employeeId;
        cin.ignore();

        cout << "Enter employee name: ";
        getline(cin, name);

        cout << "Enter department: ";
        getline(cin, department);

        cout << "Enter salary: ";
        cin >> salary;
    }

    void displayData() {
        cout << "\n--- Employee Details ---" << endl;
        cout << "Employee ID : " << employeeId << endl;
        cout << "Name        : " << name << endl;
        cout << "Department  : " << department << endl;
        cout << "Salary      : " << salary << endl;
    }
};

int main() {
    Employee e;

    e.getData();
    e.displayData();

    return 0;
}
