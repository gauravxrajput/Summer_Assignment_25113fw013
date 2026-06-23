#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int freq[256] = {0};

    for (char c : str) {
        freq[(unsigned char)c]++;
    }

    char result = '\0';
    for (char c : str) {
        if (freq[(unsigned char)c] == 1) {
            result = c;
            break;
        }
    }

    if (result != '\0')
        cout << "First non-repeating character: " << result << endl;
    else
        cout << "No non-repeating character found." << endl;

    return 0;
}
