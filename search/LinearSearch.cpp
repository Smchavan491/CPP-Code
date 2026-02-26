#include<iostream>
using namespace std;

void LinearSearch(int arr[], int n, int key){
    for(int i = 0; i<n; i++){
        if(arr[i]==key){
            cout<<"The key Element is found at index "<<i<<endl;
            return;
        }
    }
    cout<<"The key element is not found in the array"<<endl;
}

int main(){
    int arr[5];
    cout<<"Enter 5 elements of array"<<endl;
    for(int i =0; i<5; i++){
        cin>>arr[i];
    }

    cout<<"Elements of array are"<<endl;
    for(int i = 0;i<5;i++){
        cout<<arr[i]<<endl;
    }

    int key;
    cout<<"Enter the key element to search"<<endl;
    cin>>key;
    LinearSearch(arr, 5, key);
    return 0;

}