#include <iostream>
using namespace std;

int missingNum(int *arr, int size) {
    int n = size + 1;
    int total = (n * (n - 1)) / 2;
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return total - sum;
}

int main() {
    int size;
    cout << "Enter size of array : ";
    cin >> size;

    int arr[100];
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Missing number is: " << missingNum(arr, size);
    return 0;
}
