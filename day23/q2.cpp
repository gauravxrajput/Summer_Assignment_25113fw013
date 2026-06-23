#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int freq[256] = {0};
    char result = '\0';

    for (char c : str) {
        freq[(unsigned char)c]++;
        if (freq[(unsigned char)c] == 2) {
            result = c;
            break;
        }
    }

    if (result != '\0')
        cout << "First repeating character: " << result << endl;
    else
        cout << "No repeating character found." << endl;

    return 0;
}
