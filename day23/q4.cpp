#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int freq[256] = {0};
    char maxChar = '\0';
    int maxCount = 0;

    for (char c : str) {
        freq[(unsigned char)c]++;
        if (freq[(unsigned char)c] > maxCount) {
            maxCount = freq[(unsigned char)c];
            maxChar = c;
        }
    }

    if (maxChar != '\0')
        cout << "Maximum occurring character: " << maxChar 
             << " (occurs " << maxCount << " times)" << endl;
    else
        cout << "String is empty." << endl;

    return 0;
}
