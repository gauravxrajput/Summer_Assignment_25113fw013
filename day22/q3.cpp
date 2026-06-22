#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    cout << "Enter a string: ";
    getline(cin, text);

    int freq[256] = {0};  

    // Count frequency
    for (int i = 0; i < text.length(); i++) {
        freq[(unsigned char)text[i]]++;
    }

    cout << "Character frequencies:\n";
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            cout << (char)i << " : " << freq[i] << endl;
        }
    }

    return 0;
}
