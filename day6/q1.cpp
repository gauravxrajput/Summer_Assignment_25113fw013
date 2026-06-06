#include <iostream>
using namespace std;
int main()
{
    int dec, rem, pow = 1, sum = 0;
    cout << "Enter your decimal number ";
    cin >> dec;
    while (dec > 0)
    {
        rem = dec % 2;
        dec /= 2;
        sum += (rem * pow);
        pow *= 10;
    }
    cout << "The binary no is " << sum;
    return 0;
    }