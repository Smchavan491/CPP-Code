#include<iostream>

using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this->data=data;
            this->next = NULL;
        }
};

void InsertHead(Node* &head, int data){
    Node* node1 = new Node(data);
    node1->next = head;
    head = node1;
}

void Print(Node* head){
    Node* node1 = head;
    while(node1 != NULL){
        cout<<node1 -> data<<endl;
        node1 = node1 ->next;
    }
}

int main(){
    Node* head = NULL;
    InsertHead(head , 10);
    InsertHead(head , 20);
    Print(head);

    return 0;
}