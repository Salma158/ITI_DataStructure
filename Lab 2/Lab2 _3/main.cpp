#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    int id;
    string name;
    double salary;

    Employee(int id, const string& name, double salary): id(id), name(name), salary(salary) {}

    void display() {
        cout << "ID: " << id << ", Name: " << name << ", Salary: " << salary << endl;
    }
};

int searchByName(Employee employees[], int size, string& targetName) {
    for (int i = 0; i < size; ++i) {
        if (employees[i].name == targetName) {
            return i;
        }
    }
    return -1;
}

int searchById(Employee employees[], int size, int targetId) {
    for (int i = 0; i < size; ++i) {
        if (employees[i].id == targetId) {
            return i;
        }
    }
    return -1;
}

int searchBySalary(Employee employees[], int size, double targetSalary) {
    for (int i = 0; i < size; ++i) {
        if (employees[i].salary == targetSalary) {
            return i;
        }
    }
    return -1;
}

int main() {
    const int size = 3;
    Employee employees[size] = {
        Employee(1, "salma", 50000.0),
        Employee(2, "leena", 60000.0),
        Employee(3, "nour", 55000.0)
    };

    string targetName = "Jane";
    int indexByName = searchByName(employees, size, targetName);
    if (indexByName != -1) {
        cout << "Employee found by name. Index: " << indexByName << endl;
        employees[indexByName].display();
    } else {
        cout << "Employee not found by name." << endl;
    }

    int targetId = 2;
    int indexById = searchById(employees, size, targetId);
    if (indexById != -1) {
        cout << "Employee found by ID. Index: " << indexById << endl;
        employees[indexById].display();
    } else {
        cout << "Employee not found by ID." << endl;
    }

    double targetSalary = 55000.0;
    int indexBySalary = searchBySalary(employees, size, targetSalary);
    if (indexBySalary != -1) {
        cout << "Employee found by salary. Index: " << indexBySalary << endl;
        employees[indexBySalary].display();
    } else {
        cout << "Employee not found by salary." << endl;
    }

    return 0;
}
