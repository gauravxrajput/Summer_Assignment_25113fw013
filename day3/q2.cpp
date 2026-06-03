#include <iostream>
using namespace std;

int main() {
    int start, end;
    cout << "Enter start of range: ";
    cin >> start;
    cout << "Enter end of range: ";
    cin >> end;

    for (int n = start; n <= end; n++) {
        if (n <= 1) continue;
        bool prime = true;
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                prime = false;
                break;
            }
        }
        if (prime) cout << n << " ";
    }
    return 0;
}

