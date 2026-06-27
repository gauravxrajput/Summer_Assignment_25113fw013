#include <iostream>
using namespace std;

struct Student {
    int roll;
    string name;
    int age;
    float marks;
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student s[50];  

    for (int i = 0; i < n; i++) {
        cout << "\nEnter Roll No: ";
        cin >> s[i].roll;
        cout << "Enter Name: ";
        cin >> s[i].name;
        cout << "Enter Age: ";
        cin >> s[i].age;
        cout << "Enter Marks: ";
        cin >> s[i].marks;
    }

    cout << "\n--- Student Records ---\n";
    for (int i = 0; i < n; i++) {
        cout << "Roll: " << s[i].roll
             << " | Name: " << s[i].name
             << " | Age: " << s[i].age
             << " | Marks: " << s[i].marks << endl;
    }

    return 0;
}
