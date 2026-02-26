#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int data){ // constructor
            this -> data = data;
            this -> next = NULL; // by default next will be null
        }
        //destructor
        ~Node(){
            int value  = this -> data;
            if(this -> next != NULL){
                delete next;
                this -> next = NULL;
            }
            cout<<"memeor is free for data" << value <<endl;       
        }
};

void InsertAtHead(Node* &head, int d){

    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
    
}

void InsertAtTail(Node* &tail, int d){

    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next;
}

void Print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp -> data << " ";
        temp = temp -> next; //incrementing the temp to the next
    }
    cout<< endl;
}

void InsertAtPosition(Node* &head, int position, int data){

    if(position == 1){
        InsertAtHead(head, data);
        return;
    }
    Node* temp = head;
    int cnt = 1;

    while(cnt<position-1){
        temp = temp -> next;
        cnt++;
    }
    Node* nodeToInsert = new Node(data);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}

//deletion node
void deleteNode(int position , Node* &head){
    if(position == 1){
        Node* temp = head;
        head = head -> next;
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
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}

int main(){
    // Node* node1 = new Node(10); //creation of node1
    // cout<< node1 -> data <<endl;// garbage value & due to pointer we will print it like this
    // cout<< node1 -> next << endl;
    // Node* node2 = new Node(20);
    // node1 -> next = node2; // linking node1 to node2
    // node2 -> next = NULL; // by default next will be null
    
    // cout<< node2 -> data <<endl;
    // cout<< node2 -> next << endl;


    // Node* node1 = new Node(10); //creation of node1
    // Node* node2 = new Node(20);
    // Node* node3 = new Node(90);
    // node3 -> next = node1; // linking node3 to node1
    // node1 -> next = node2; // linking node1 to node2
    // node2 -> next = NULL; // by default next will be null
    // cout<< node3 -> data <<endl;
    // cout<< node3 -> next << endl;
    // cout<< node1 -> data <<endl;
    // cout<< node1 -> next << endl;
    // cout<< node2 -> data <<endl;
    // cout<< node2 -> next << endl;


    Node* node1 = new Node(10); //creation of node1
    // cout<<node1 -> data << endl;
    // cout<<node1 -> next << endl;

    Node* head = node1;
    Node* tail = node1;
    Print(head);

    InsertAtHead(head, 65); // inserting at head
    Print(head);

    InsertAtTail(tail, 12); // inserting at head
    Print(head);
    InsertAtTail(tail, 90); // inserting at head
    Print(head);

    InsertAtPosition(head, 3, 67);
    Print(head);

    InsertAtPosition(head, 1, 87);
    Print(head);

    InsertAtPosition(head, 6, 35);
    Print(head);

    // cout<<"head :" << head -> data << endl;
    // cout<<"tail : " << tail -> data << endl;

    deleteNode(1, head);
    Print(head);

    deleteNode(4, head);
    Print(head);
    return 0;
    

}