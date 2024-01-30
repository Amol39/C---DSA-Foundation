#include<iostream>
using namespace std ;

class Node{
    public:
    int val ;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};

class LinkedList{
    public:
    Node* head;

    LinkedList(){
        head = NULL;
    }

    void insertAtTail(int val){
        Node *new_node = new Node(val);
        if(head==NULL){
            head = new_node;
            return;
        }
        Node *temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = new_node;
    }

    void display(){
        Node *temp = head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

Node* ReverseLL(Node* &head){
    Node* prevptr = NULL;
    Node* currptr = head;
    while(currptr!=NULL){
        Node* nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
    }
    Node* new_head = prevptr;
    return new_head;
}

int main(){
    LinkedList ll;
    int n ,value;
    cout<<"How many elements you want to insert: ";
    cin>>n;
    cout<<"Enter Elements: ";
    for(int i =0;i<n;i++){
        cin>>value;
        ll.insertAtTail(value);
    }
    ll.display();
    ll.head = ReverseLL(ll.head);
    ll.display();
    return 0 ;
}