#include <iostream>
using namespace std;

int main() {
    int rows;
    cout<<"Enter the number of rows : "<<endl;
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        for (char ch = 'A'; ch <= 'A' + i - 1; ch++) {
            cout << ch;
        }
        for (char ch = 'A' + i - 2; ch >= 'A'; ch--) {
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}
