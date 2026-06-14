#include <iostream>
using namespace std;

int frequency(int arr[], int size, int target) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            count++;
        }
    }
    return count;
}

int main() {
    int size, target;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cin >> target;
    int result = frequency(arr, size, target);
    cout << "Frequency of " << target << " = " << result;
    return 0;
}
