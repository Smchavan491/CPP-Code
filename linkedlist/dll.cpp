#include<iostream>

using namespace std;

//creating class or structure
class Node{
    public:
    Node* prev;
    Node* next;
    int data;

    //creating constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
        this -> prev = NULL;
    } 
    
    //destructor
    ~Node(){
        int value  = this -> data;
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout<<"memeory is free for data : " << value <<endl;       
    }

};

//travesrse linked list
void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp -> data << " ";
        temp = temp -> next;
    }
    cout<<endl;
    
}

//gives length of linked list
int getLength(Node* head){
    int len = 0;
    Node* temp = head;

    while(temp != NULL){
        len++;
        temp = temp -> next;
    }
    return len;

}

//insert at head
void insertAtHead(Node* &head, Node* &tail, int data){

    //empty list
    if(head == NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }else{
    Node* temp = new Node(data);
    temp -> next =head;
    head -> prev = temp;
    head = temp;
    }

}

//insert at tail
void insertAttail(Node* &head, Node* &tail, int data){
    if(tail == NULL){
        Node* temp = new Node(data);
        tail = temp;
        head = temp;

    }else{
    Node* temp = new Node(data);
     temp -> prev = tail;
     tail -> next = temp;
     tail = temp;
    }
}

//insert at any position
void insertAtpositon(Node* &head, Node* &tail,  int position, int data){
    //insert at head
    if(position == 1){
        insertAtHead(head, tail,data);
        return;
    }
    Node* temp = head;
    int cnt = 1;

    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }
    //inser at last
    if(temp -> next == NULL){   
        insertAttail(head, tail,data);
        return;
    }
    //crating the node to insert
    Node* nodetoinsert = new Node(data);
    nodetoinsert -> next = temp -> next;
    temp -> next -> prev = nodetoinsert;
    temp -> next = nodetoinsert;
    nodetoinsert -> prev = temp;
}

//deletion of node
void deleteNode(int position , Node* &head){
    if(position == 1){
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }else{
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        curr -> next = NULL;
        prev -> next = curr -> next;
        curr ->next = NULL;
        delete curr;
    }
}

int main(){

    Node* head = NULL;
    Node* tail = NULL;

    print(head);
    cout<<getLength(head)<<endl;

    //calling function insertAtHead()
    insertAtHead(head,tail, 11);
    print(head);

    insertAttail(head, tail, 90);
    print(head);

    insertAtpositon(head,tail, 3, 54);
    print(head);

    insertAtpositon(head, tail, 1, 84);
    print(head);

    insertAtpositon(head,tail, 5, 78);
    print(head);

    deleteNode(1, head);
    print(head);
    cout<<"head :"<<head -> data<<endl;
    cout<<"tail :"<< tail -> data<<endl;

    deleteNode(3, head);
    print(head);
    cout<<"head :"<<head -> data<<endl;
    cout<<"tail :"<< tail -> data<<endl;

    deleteNode(3, head);
    print(head);
    cout<<"head :"<<head -> data<<endl;
    cout<<"tail :"<< tail -> data<<endl;

}