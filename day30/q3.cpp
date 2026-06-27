#include <iostream>
using namespace std;

struct Employee {
    int id;
    string name;
    int age;
    double salary;
};

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    Employee emp[50];  

    for (int i = 0; i < n; i++) {
        cout << "\nEnter Employee ID: ";
        cin >> emp[i].id;
        cout << "Enter Name: ";
        cin >> emp[i].name;
        cout << "Enter Age: ";
        cin >> emp[i].age;
        cout << "Enter Salary: ";
        cin >> emp[i].salary;
    }

    cout << "\n--- Employee Records ---\n";
    for (int i = 0; i < n; i++) {
        cout << "ID: " << emp[i].id
             << " | Name: " << emp[i].name
             << " | Age: " << emp[i].age
             << " | Salary: " << emp[i].salary << endl;
    }

    return 0;
}
