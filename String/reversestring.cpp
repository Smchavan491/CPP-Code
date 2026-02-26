#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    int st = 0, end = str.size() - 1;

    // reverse(str.begin(), str.end());
    // cout<<str<<endl;

    while(st< end){
        swap(str[st++], str[end--]);
    }
    cout<<str<<endl;

}