#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n==0 || n==1){ //base case
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}

void printFibonacci(int n) {
    cout << "Fibonacci series: ";
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
}
 
int main(){
    cout<<printFibonacci(4);
    return 0;
}
