#include<iostream>
#include<string>
using namespace std;
 int divisibleBy8(string &s){
    int n = s.length();
    int last3 = 0;

    if( n>= 3){
        last3 = stoi(s.substr(n-3, 3));
    }else{
        last3 = stoi(s);
    }

    return last3 % 8 == 0;
}

int main(){
    string s;
    cin>>s;
    if(divisibleBy8(s)){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
}