#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of element "<<endl;
    cin >> n;
    int arr[n];
    int evenCount = 0, oddCount = 0;
cout<<"Enter the element : "<<endl;
    for (int i = 0; i < n; i++) {
        
        cin >> arr[i];
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    cout << "Even elements = " << evenCount << endl;
    cout << "Odd elements = " << oddCount << endl;

    return 0;
}
