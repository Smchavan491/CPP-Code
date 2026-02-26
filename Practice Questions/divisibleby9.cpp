#include<iostream>
using namespace std;

int divisibleBy9(string s){
    int n = s.length();
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=(s[i]-'0');
    }
    return sum%9==0;
}

int main(){
    string s;
    cin>>s;
    if(divisibleBy9(s)){
        cout<<"Yes";    
    }else{
        cout<<"No";
    }
}