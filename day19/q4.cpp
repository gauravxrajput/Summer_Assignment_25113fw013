#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;

    int a[n][n], sum = 0;

    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    for (int i = 0; i < n; i++)
        sum += a[i][i];

    cout << "Diagonal sum = " << sum << endl;

    return 0;
}
