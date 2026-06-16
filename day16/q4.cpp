#include <iostream>
using namespace std;

int main() {
    int size;
    cout<<"Enter the size of array element : "<<endl;
    cin >> size;

    int arr[100];
    cout<<"Enter ther array element "<<endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < size; i++) {
        bool duplicate = false;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                duplicate = true;
                break;
            }
        }
        if (!duplicate) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
