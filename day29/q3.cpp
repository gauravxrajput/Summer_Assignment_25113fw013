#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int choice;

    cout << "Enter a string: ";
    cin >> str;

    do {
        cout << "\n--- String Operations Menu ---\n";
        cout << "1. Display String\n";
        cout << "2. Find Length\n";
        cout << "3. Reverse String\n";
        cout << "4. Convert to Uppercase\n";
        cout << "5. Convert to Lowercase\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "String: " << str << endl;
                break;

            case 2:
                cout << "Length = " << str.length() << endl;
                break;

            case 3: {
                string rev = "";
                for (int i = str.length() - 1; i >= 0; i--)
                    rev += str[i];
                cout << "Reversed String: " << rev << endl;
                break;
            }

            case 4: {
                string upper = str;
                for (int i = 0; i < upper.length(); i++)
                    upper[i] = toupper(upper[i]);
                cout << "Uppercase: " << upper << endl;
                break;
            }

            case 5: {
                string lower = str;
                for (int i = 0; i < lower.length(); i++)
                    lower[i] = tolower(lower[i]);
                cout << "Lowercase: " << lower << endl;
                break;
            }

            case 6:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 6);

    return 0;
}

