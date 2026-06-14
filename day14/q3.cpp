#include <iostream>
#include <climits>
using namespace std;

int secondLargest(int arr[], int size) {
    int largest = INT_MIN, second = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }
    return (second == INT_MIN) ? -1 : second;
}

int main() {
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int result = secondLargest(arr, size);
    if (result != -1)
        cout << "Second largest element = " << result;
    else
        cout << "No second largest element";
    return 0;
}
