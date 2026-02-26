#include<iostream>
using namespace std;

int main(){
    //square pattern
    int n = 4;
    // char ch = 'A';
    // for(int i = 1; i<=n; i++){  // outer loop for rows
    //     for(int j = 1; j<=n; j++){  // inner loop for columns
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }


    //charecter square pattern
    // for(int i = 0; i<=n-1; i++){
    //     char ch = 'A';
    //     for(int j = 0; j <= n-1; j++){
    //         cout<<ch<<" ";
    //         ch = ch + 1;
    //     }
    //     cout<<endl;
    // }

    // //number in square pattern 123456 incrment
    // 	int num = 1;
    //     for(int i =0; i<n; i++){
    //         for(int j = 0; j<n; j++){
    //             cout<<num<<" ";
    //             num++;
    //         }
    //         cout<<endl;
    //     }

    // //charecter incremnt abcdefg
    // for(int i =0; i<n; i++){
    //     for(int j = 0; j<n; j++){
    //         cout<<ch<<" ";
    //         ch = ch + 1;
    //     }
    //     cout<<endl;
    // }


    // //triangle pattern
    // for(int i = 0; i<n;i++){
    //     for(int j =0; j<=i; j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }


    //triangle pattern number
   
    // for(int i =0; i<=n-1; i++){
    //     int num = 1;
    //     for(int j = 0; j<=i; j++){
    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;
    // }


    // //triangle number increment pattern
    //flodys triangle pattern
    // int num = 1; 
    // for(int i =0; i<=n-1; i++){
    //     for(int j = 0; j<=i; j++){
    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;
    // }

    //triangle charecter pattern
    // for(int i =0; i<=n-1; i++){
    //     char ch = 'A';
    //     for(int j = 0; j<=i; j++){
    //         cout<<ch<<" ";
    //         ch = ch + 1;
    //     }
    //     cout<<endl;
    // }

    //triangle charecter incrment pattern
    
    // for(int i =0; i<=n-1; i++){
    //     for(int j = 0; j<=i; j++){
    //         cout<<ch<<" ";
    //         ch = ch + 1;
    //     }
    //     cout<<endl;
    // }

    // triangle pattern with repeted rows 1 22 333 4444
    // for(int i = 0; i<n; i++){
    //     for(int j = 0; j<=i;j++){
    //         cout<<i+1<<" ";
    //     }
    //     cout<<endl;
    // }


    // triangle pattern with repeated charecter
    // for(int i = 0; i<n; i++){
    //     char ch = 'A' + i;
    //     for(int j = 0; j<=i; j++){
    //         cout<<ch<<" ";
    //     }
    //     cout<<endl;
    //}


    //backward loop
    // for(int i = 0; i<=n; i++){
    //     for(int j = i + 1; j>0; j--){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    // for(int i = n; i >= 0; i--){
    //     for(int j = 1; j <= i; j++){
    //         cout<<'*'<<" ";
    //     }
    //     cout<<endl;
        
   // }
     
   // opposite inverted pattern 1111 222 33 4
//     int num = 1;
//     for(int i =0; i<n; i++){
//         for(int j = 0; j<i; j++){
//             cout<<" ";
//         }
//         //numbers
//         for(int j = 0; j < n-i; j++){
//             cout<<(i + 1);
//         }
//     cout<<endl;
//    }

    

    // pyramid pattern
    for(int i = 0; i<n; i++){
        //spaces
        for(int j =0; j<n-i-1; j++){
            cout<<" ";
        }
        //nums 1
        for(int j = 1; j<=i + 1; j++){
            cout<<j;
        }
        for(int j = i; j > 0; j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}