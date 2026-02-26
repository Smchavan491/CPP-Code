#include<iostream>
#include<string>
using namespace std;

void shiftEachby1(string &s) {   // ✅ pass by reference
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = (s[i] == 'z') ? 'a' : s[i] + 1;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = (s[i] == 'Z') ? 'A' : s[i] + 1;
        }
        else {
            s[i] = s[i]; // Non-alphabetic characters remain unchanged
        }
    }
}

int main(){
    string s;
    getline(cin, s);
    shiftEachby1(s);
    cout<<s;

}