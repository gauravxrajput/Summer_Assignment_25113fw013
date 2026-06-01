#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"enter the number "<<endl ;
    cin >> num;   // take input

    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}
