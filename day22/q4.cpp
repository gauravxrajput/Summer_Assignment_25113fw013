#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    cout << "Enter a string: ";
    getline(cin, text);

    string result = "";
    for (int i = 0; i < text.length(); i++) {
        if (text[i] != ' ') {
            result += text[i];
        }
    }

    cout << "String without spaces: " << result << endl;
    return 0;
}
