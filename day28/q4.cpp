#include <iostream>
using namespace std;

struct Contact {
    int id;
    string name;
    string phone;
};

int main() {
    int n;
    cout << "Enter number of contacts: ";
    cin >> n;

    Contact c[50];   

    for (int i = 0; i < n; i++) {
        cout << "\nEnter Contact ID: ";
        cin >> c[i].id;
        cout << "Enter Name: ";
        cin >> c[i].name;
        cout << "Enter Phone Number: ";
        cin >> c[i].phone;
    }

    cout << "\n--- Contact List ---\n";
    for (int i = 0; i < n; i++) {
        cout << "ID: " << c[i].id
             << " | Name: " << c[i].name
             << " | Phone: " << c[i].phone << endl;
    }

    return 0;
}
