#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of array element : "<<endl;
    cin >> n;

    int arr[100];
cout<<"Enter array element : "<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int left = 0;  
    for (int right = 0; right < n; right++) {
        if (arr[right] != 0) {
            swap(arr[left], arr[right]);
            left++;
        }
    }
cout<<"The required answer is : "<<endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
