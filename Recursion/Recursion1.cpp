#include<iostream>
using namespace std;

void printNum(int n){
    if(n==1){       //base case
        cout<< 1;
        return ;
    }
    cout<<n<<" ";
    printNum(n-1);  //recursive call
}
 int main(){
    printNum(4);
 }