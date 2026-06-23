#include <iostream>
#include <string>
using namespace std;

bool areAnagrams(string s1, string s2) {
    if (s1.length() != s2.length())
        return false;

    int freq[256] = {0};

    for (char c : s1)
        freq[(unsigned char)c]++;

    for (char c : s2)
        freq[(unsigned char)c]--;

    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0)
            return false;
    }
    return true;
}

int main() {
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    if (areAnagrams(str1, str2))
        cout << "Strings are anagrams." << endl;
    else
        cout << "Strings are not anagrams." << endl;

    return 0;
}
