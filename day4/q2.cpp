#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter term number  ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a non-negative number.\n";
        return 1;
    }

    int a = 0, b = 1, c;

    if (n == 0) {
        cout << "Fibonacci term: " << a << endl;
        return 0;
    }
    if (n == 1) {
        cout << "Fibonacci term: " << b << endl;
        return 0;
    }

    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    cout << "Fibonacci term: " << b << endl;
    return 0;
}
