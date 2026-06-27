
#include <iostream>
using namespace std;

struct Student {
    int roll;
    string name;
    int age;
    float marks;
};

void display(Student s[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Roll: " << s[i].roll
             << " | Name: " << s[i].name
             << " | Age: " << s[i].age
             << " | Marks: " << s[i].marks << endl;
    }
}

void searchByRoll(Student s[], int n, int roll) {
    for (int i = 0; i < n; i++) {
        if (s[i].roll == roll) {
            cout << "Found: " << s[i].name << " (Marks: " << s[i].marks << ")\n";
            return;
        }
    }
    cout << "No student found with Roll " << roll << endl;
}

void findTopper(Student s[], int n) {
    int idx = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[idx].marks) idx = i;
    }
    cout << "Topper: " << s[idx].name << " (Roll " << s[idx].roll << ", Marks: " << s[idx].marks << ")\n";
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student s[50];
    for (int i = 0; i < n; i++) {
        cin >> s[i].roll >> s[i].name >> s[i].age >> s[i].marks;
    }

    int choice;
    do {
        cout << "\n1. Display All Records\n2. Search by Roll Number\n3. Find Topper\n4. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: display(s, n); break;
            case 2: {
                int roll;
                cout << "Enter Roll No: ";
                cin >> roll;
                searchByRoll(s, n, roll);
                break;
            }
            case 3: findTopper(s, n); break;
            case 4: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 4);

    return 0;
}
