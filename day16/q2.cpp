#include <iostream>
using namespace std;

int main() {
    int size;
    cin >> size;
    int arr[100];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int maxFreq = 0, element = arr[0];
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxFreq) {
            maxFreq = count;
            element = arr[i];
        }
    }

    cout << "Element with maximum frequency: " << element << endl;
    cout << "Frequency: " << maxFreq;
    return 0;
}
