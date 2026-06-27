#include <iostream>
using namespace std;

struct Item {
    int id;
    string name;
    int quantity;
    double price;
};

int main() {
    int n;
    cout << "Enter number of items: ";
    cin >> n;

    Item inv[50];   

    for (int i = 0; i < n; i++) {
        cout << "\nEnter Item ID: ";
        cin >> inv[i].id;
        cout << "Enter Item Name: ";
        cin >> inv[i].name;
        cout << "Enter Quantity: ";
        cin >> inv[i].quantity;
        cout << "Enter Price: ";
        cin >> inv[i].price;
    }

    cout << "\n--- Inventory Records ---\n";
    for (int i = 0; i < n; i++) {
        cout << "ID: " << inv[i].id
             << " | Name: " << inv[i].name
             << " | Quantity: " << inv[i].quantity
             << " | Price: " << inv[i].price
             << " | Total Value: " << inv[i].quantity * inv[i].price
             << endl;
    }

    return 0;
}
