#include <iostream>
using namespace std;

int main() {
    int size, target;
    cout<<"Enter the size of the element : "<<endl;
    cin >> size;
    cout<<"Enter the array element : "<<endl;
    int arr[100];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cin >> target;

    bool found = false;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "Pair found: " << arr[i] << " + " << arr[j] << " = " << target << endl;
                found = true;
            }
        }
    }

    if (!found) {
        cout << "No pair found with sum " << target;
    }

    return 0;
}
