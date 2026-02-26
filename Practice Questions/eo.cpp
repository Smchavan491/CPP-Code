#include <iostream>
using namespace std;

int evenOddCount(int* arr, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        // even index → even value
        if (i % 2 == 0 && arr[i] % 2 == 0) {
            count++;
        }
        // odd index → odd value
        else if (i % 2 == 1 && arr[i] % 2 == 1) {
            count++;
        }
        else {
            return -1;   // pattern broken
        }
    }

    return count;
}

int main() {
    int arr[] = {2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << evenOddCount(arr, n);

    return 0;
}