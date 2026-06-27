#include <iostream>
using namespace std;

struct BankAccount {
    int accNo;
    string name;
    double balance;
};

int main() {
    int n;
    cout << "Enter number of accounts: ";
    cin >> n;

    BankAccount acc[50];   

    for (int i = 0; i < n; i++) {
        cout << "\nEnter Account Number: ";
        cin >> acc[i].accNo;
        cout << "Enter Name: ";
        cin >> acc[i].name;
        cout << "Enter Initial Balance: ";
        cin >> acc[i].balance;
    }

    cout << "\n--- Bank Accounts ---\n";
    for (int i = 0; i < n; i++) {
        cout << "Account No: " << acc[i].accNo
             << " | Name: " << acc[i].name
             << " | Balance: " << acc[i].balance << endl;
    }

    return 0;
}
