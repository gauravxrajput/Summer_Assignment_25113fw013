#include <iostream>
using namespace std;

int main() {
    int num, rev = 0, rem, temp;
    cout << "Enter a number: ";
    cin >> num;

    temp = num;
    while (num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }

    if (temp == rev)
        cout << "Palindrome number" << endl;
    else
        cout << "Not a palindrome number" << endl;

    return 0;
}
