#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of element : "<<endl;
    cin >> n;

    int arr[100];
cout<<"Enter array element : "<<endl; ;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int left = 0, right = n - 1;
    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
cout<<"Reversed array is : "<<endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
