#include<iostream>
using namespace std;

int differ(char num[]){
    
    int evensum=0, oddsum=0;

    for(int i=0; num[i]!='\0';i++){
        int digit = num[i]-'0';
        if((num[i+1])%2==0){
            evensum+=digit;
        }
        else{
            oddsum+=digit;

        }
    }
    return evensum-oddsum;
}

int main(){

    char num[100];
    cin >> num;

    cout << differ(num);
    return 0;
    
}