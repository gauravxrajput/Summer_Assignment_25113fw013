#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    string word = "", longest = "";
    for (int i = 0; i <= s.size(); i++) {
        if (i < s.size() && s[i] != ' ') {
            word += s[i];
        } else {
            if (word.size() > longest.size())
                longest = word;
            word = "";
        }
    }

    cout << longest;
    return 0;
}
