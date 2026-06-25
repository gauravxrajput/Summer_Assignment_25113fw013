#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;

    int freq1[256] = {0}, freq2[256] = {0};

    for (char c : s1) freq1[(unsigned char)c]++;
    for (char c : s2) freq2[(unsigned char)c]++;

    cout << "Common characters: ";
    for (int i = 0; i < 256; i++) {
        if (freq1[i] > 0 && freq2[i] > 0)
            cout << (char)i << " ";
    }

    return 0;
}
