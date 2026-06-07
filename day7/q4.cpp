#include <iostream>
using namespace std;

int reverseNumber(int n, int rev = 0) {
    if (n == 0)
        return rev;
    return reverseNumber(n / 10, rev * 10 + n % 10);
}

int main() {
    int num;
    cout<<"Enter the number to be reversed  "<<endl;
    cin >> num;
    if (num < 0) num = -num;
    cout<<"The reversed number is " << reverseNumber(num);
    return 0;
}
