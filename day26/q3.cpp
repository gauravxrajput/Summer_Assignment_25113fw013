#include <iostream>
using namespace std;

int main() {
    int balance = 1000; 
    int choice, amount;

    cout << "Welcome to the ATM Simulation" << endl;

    do {
        cout << "\nMenu:" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Your balance is: " << balance << endl;
                break;
            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                balance += amount;
                cout << "Deposit successful. New balance: " << balance << endl;
                break;
            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount <= balance) {
                    balance -= amount;
                    cout << "Withdrawal successful. New balance: " << balance << endl;
                } else {
                    cout << "Insufficient balance!" << endl;
                }
                break;
            case 4:
                cout << "Thank you for using the ATM. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
