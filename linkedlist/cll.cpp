#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    ~Node(){
        int value = this -> data;
        if(this->next != NULL){
            delete next;
            this-> next = NULL;
        }
        cout<<"memeory is free for data : " << value <<endl;
    }
};

void insertNode(Node* &tail, int data,int ele){
    if(tail == NULL){
        Node* newNode = new Node(data);
        tail = newNode;
        newNode -> next = newNode;
    }else{
        //non empty list
        Node* curr = tail;
        while(curr -> data != ele){
            curr = curr -> next;
        }
        Node* temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node* tail){

    Node* temp = tail;
    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }while(tail != temp);
    cout<<" "<<endl;
}

void deleteNode(Node* &tail ,int value){
    Node*  temp = tail;
    //if node is empty
    if(tail == NULL){
        cout<<"List is empty"<<endl;
        return;
    }else{
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value){
            prev = curr;
            curr = curr -> next;
        }
        prev -> next = curr -> next ;
        if(curr == prev){
            tail = NULL;    
        }
        else if(tail == curr){
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;
    }

}

int main(){
    Node* tail = NULL;
    insertNode(tail, 10, 3);
    print(tail);

    insertNode(tail, 3, 10);
    print(tail);

    insertNode(tail, 4, 3);
    print(tail);

    insertNode(tail, 65, 4);
    print(tail);

    insertNode(tail, 8, 3);
    print(tail);

    deleteNode(tail, 3);
    print(tail);

}
