

#include <iostream>
using namespace std;

struct Employee {
    int id;
    string name;
    double salary;
};

int main() {
    Employee emp[50];   
    int n, choice;

    cout << "Enter number of employees: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nEnter Employee ID: ";
        cin >> emp[i].id;
        cout << "Enter Name: ";
        cin >> emp[i].name;
        cout << "Enter Salary: ";
        cin >> emp[i].salary;
    }

    cout << "\n--- Salary Records ---\n";
    for (int i = 0; i < n; i++) {
        cout << "ID: " << emp[i].id 
             << " | Name: " << emp[i].name 
             << " | Salary: " << emp[i].salary << endl;
    }

    return 0;
}
