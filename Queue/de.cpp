#include<iostream>
#include<queue>

using namespace std;

int main(){
    deque<int>d;
    d.push_front(29);
    d.push_front(56);
    d.push_back(90);
    d.push_back(30);
    // cout<<d.front()<<endl;
    // cout<<d.back()<<endl;
    d.pop_back();
    cout<<d.back()<<endl;
    d.pop_front();
    cout<<d.front()<<endl;

}