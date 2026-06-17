#include <iostream>
#include <set>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1;
    int arr1[n1];
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cin >> n2;
    int arr2[n2];
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    set<int> s1(arr1, arr1 + n1);
    set<int> common;

    for (int i = 0; i < n2; i++) {
        if (s1.find(arr2[i]) != s1.end()) {
            common.insert(arr2[i]);
        }
    }

    for (int x : common) {
        cout << x << " ";
    }

    return 0;
}
