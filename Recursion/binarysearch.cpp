#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>& arr, int tar, int st, int en){
    if(st<=en){
        int mid = st+(en-st)/2;
        if(arr[mid]==tar) return mid;

        else if(arr[mid]<=tar){
            return binarySearch(arr, tar, mid+1, en);
        }
        else{
            return binarySearch(arr, tar, st, mid-1);
        }

    }
    return -1;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int tar = 3;
    cout<<binarySearch(arr, tar, 0, arr.size()-1);
    return 0;
}