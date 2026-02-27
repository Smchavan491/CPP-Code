#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){
    int i=0, j=s.size()-1;
    while(i < j){
        if(s[i++] != s[j--]){
            return false;
        }
    }
    return true;
}

int main(){
    string s;
    getline(cin, s);
    
    if(isPalindrome(s)){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not a Palindrome";
    }
}