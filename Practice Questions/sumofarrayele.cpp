#include<iostream>

using namespace std;

int sum(int arr[], int n ){
    /* if(n==0) return 0;
    int ans = 0;
    for(int i=0; i<n; i++){
        ans += arr[i];
    }
    return ans; */

    //--------- Recursive approach ---------
    if(n==0) return 0;
    return arr[0] + sum(arr+1, n-1);
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << sum(arr, n);
    return 0;

}