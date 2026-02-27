#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5];

    cout << "Enter array elements:" << endl;
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    // Reverse the array
    reverse(arr, arr + 5);

    cout << "Reversed array: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}