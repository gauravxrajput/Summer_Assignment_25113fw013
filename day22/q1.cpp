#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str) {
    int start = 0;
    int end = str.length() - 1;

    while (start < end) {
        if (str[start] != str[end])
            return false;
        start++;
        end--;
    }
    return true;
}

int main() {
    string text;
    cout << "Enter a string: ";
    cin >> text;

    if (isPalindrome(text))
        cout << text << " is a palindrome." << endl;
    else
        cout << text << " is not a palindrome." << endl;

    return 0;
}
