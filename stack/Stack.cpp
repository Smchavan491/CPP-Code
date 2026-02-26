#include<iostream>
#include<stack>

using namespace std;


// Stack implementation using array

//class declaration
class Mystack{

    public:
        int *arr;
        int top;
        int size;  
        
    Mystack(int size){
        this->size=size;
        arr = new int[size];
        top=-1;
    }

    //push operation

    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }else{
            cout<<"Stack Overflow"<<endl;
        }
    }

    //pop operation
    void pop(){

        if(top==-1){
            cout<<"Stack Underflow"<<endl;
        }else{
            top--;
        }

    }

    //peek operation
    int peek(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
            return -1;
        }else{
            return arr[top];
        }

    }

    //isEmpty operation
    bool isEmpty(){
        if(top==-1){
            return true;
        }else{
            return false;
        }


    }
};






int main(){

    Mystack s(5);
    // s.push(1);
    // s.push(2);
    // s.push(3);
    // s.push(4);
    // s.push(5);

    cout<<s.peek()<<endl;

    s.pop();

    s.push(6);

    s.pop();

    cout<<s.peek()<<endl;

    cout<<s.isEmpty()<<endl;







    // // stl stack declaration
    // stack<int> s;
    // //push operation
    // s.push(1);
    // s.push(2);

    // //size of stack
    // cout<<s.size()<<endl;

    // //pop operation
    // s.pop();
    
    // //size of stack
    // cout<<s.size()<<endl;

    // //top element of stack
    // cout<<s.top()<<endl;

    // //check if stack is empty
    // if(s.empty()){
    //     cout<<"stack is empty"<<endl;
    // }else{
    //     cout<<"stack is not empty"<<endl;
    // }

    
}