#include <iostream>
using namespace std;

int main() {
    int num;
    int factorial = 1; // use long long for large results

    cout << "Enter a positive integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }
        cout << "Factorial of " << num << " = " << factorial << endl;
    }

    return 0;
}