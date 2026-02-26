#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5] = {2, 4, 3, 6, 7};
    int key = 4;

    // Define pointers to the start and end of the array
    int *s = arr;       // Start pointer
    int *e = arr + 5;   // End pointer (one past the last element)

    // Use std::find to locate the key
    int *f = find(s, e, key);

    // Check if the key was found
    if (f != e) {
        cout << "Element found at index " << (f - arr) << endl; // 0-based index
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
