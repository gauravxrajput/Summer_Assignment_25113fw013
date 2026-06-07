#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int num;
    cout<<"Enter thr number : "<<endl;
    cin >> num;
    if (num < 0) num = -num;
    cout<<"The sum os the digit is : " << sumOfDigits(num);
    return 0;
}