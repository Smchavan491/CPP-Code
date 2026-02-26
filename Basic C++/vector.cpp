// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     vector<int> arr(5); // Declare a single vector of size 5

//     cout << "Enter 5 elements of the array:" << endl;
//     for (int i = 0; i < 5; i++) {
//         cin >> arr[i]; // Input elements into the vector
//     }

//     cout << "Elements of the array are:" << endl;
//     for (int i = 0; i < 5; i++) {
//         cout << arr[i] << endl; // Output the elements
//     }

//     return 0; // Return 0 to indicate successful execution
// }

#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> v[5];

    for (int i = 0; i<5; i++){
        int n;
        cout<<"Enter the element of vector"<<i + 1<<":" <<endl;
        cin>>n;
        cout<<n<<endl;
        
    }
}
