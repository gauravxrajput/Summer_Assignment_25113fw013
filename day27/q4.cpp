#include <iostream>
using namespace std;

int main() {
    int roll;
    string name;
    int marks[5], total = 0;
    float percent;

    cout << "Enter Roll No: ";
    cin >> roll;
    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter marks of 5 subjects:\n";
    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
        total += marks[i];
    }

    percent = total / 5.0;

    cout << "\n--- Marksheet ---\n";
    cout << "Roll No : " << roll << endl;
    cout << "Name    : " << name << endl;
    cout << "Total   : " << total << endl;
    cout << "Percent : " << percent << "%" << endl;

    return 0;
}
