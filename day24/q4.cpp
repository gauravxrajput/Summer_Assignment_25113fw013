#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    string result = "";
    bool seen[256] = {false};

    for (char c : s) {
        if (!seen[(unsigned char)c]) {
            result += c;
            seen[(unsigned char)c] = true;
        }
    }

    cout << result;
    return 0;
}
