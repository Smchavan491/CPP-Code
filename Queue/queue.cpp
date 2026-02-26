#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<int> q;
    //pushing element in queue
    cout<<"Pushing the elements in the queue"<<endl;
    q.push(12);
    q.push(34);
    q.push(56);

    //size of queue
    cout<<"size of the queue"<<endl;
    cout<<q.size()<<endl;

    //pop element
    cout<<"pop the elemet from the queue"<<endl;
     q.pop();

    //fornt element
    cout<<"Front element"<<endl;
    cout<<q.front()<<endl;

    //empty or not

    if(q.empty()){
        cout<<"queue is empty"<<endl;
    }else{
        cout<<"queue is not empty"<<endl;
    }

    q.pop();
    q.pop();

    cout<<q.size()<<endl;

    if(q.empty()){
        cout<<"queue is empty"<<endl;
    }else{
        cout<<"queue is not empty"<<endl;
    }




}