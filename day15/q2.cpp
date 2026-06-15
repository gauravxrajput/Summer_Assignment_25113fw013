#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of element of  array : "<<endl;
    cin >> n;

    int arr[100];
    cout<<"enter the array element : "<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int first = arr[0];
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = first;

    cout<<"The rotated array is : "<<endl;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
