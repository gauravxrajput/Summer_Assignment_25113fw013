#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int start, end;
    cout << "Enter start of range: ";
    cin >> start;
    cout << "Enter end of range: ";
    cin >> end;

    cout << "Armstrong numbers between " << start << " and " << end << " are: ";
    for (int num = start; num <= end; num++) {
        int originalNum = num, remainder, n = 0;
        double result = 0.0;

        int temp = num;
        while (temp != 0) {
            temp /= 10;
            ++n;
        }

        temp = num;
        while (temp != 0) {
            remainder = temp % 10;
            result += pow(remainder, n);
            temp /= 10;
        }

        if ((int)result == num)
            cout << num << " ";
    }
    cout << endl;

    return 0;
}
