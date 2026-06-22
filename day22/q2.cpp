#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    int count = 0;
    bool inWord = false;

    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] != ' ' && !inWord) {
            inWord = true;
            count++;
        } else if (sentence[i] == ' ') {
            inWord = false;
        }
    }

    cout << "Number of words: " << count << endl;
    return 0;
}
