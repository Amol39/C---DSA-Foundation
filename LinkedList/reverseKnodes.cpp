#include<iostream>
using namespace std ;

class Node{
    public:
    int val ;
    Node* next;

    Node(int data){
        val = data ;
        next = NULL;
    }
};

class LinkedList{
    public:
    Node*head;

    LinkedList(){
        head = NULL;
    }

    void insertAtTail(int value){
        Node *new_node = new Node(value);
        if(head==NULL){
            head = new_node;
            return ;
        }
        Node*temp = head;
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
Node* reverseKLL(Node* &head, int k ){
    Node* prevptr = NULL;
    Node* currptr = head;
    int counter = 0 ; // for count the first K nodes 

    while(currptr!=NULL && counter<k){
        Node* nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        counter++;
    }
    // currptr will give (k+1)th node 
    if(currptr!=NULL){
        Node* new_head= reverseKLL(currptr,k);
        head->next = new_head;
    } 
    return prevptr;
}

int main(){
    LinkedList ll;
    int n , value ;
    cout<<"How many nodes you want to insert: ";
    cin>>n;
    cout<<"Enter Elements: ";
    for(int i=0;i<n;i++){
        cin>>value;
        ll.insertAtTail(value);
    }
    ll.display();
    cout<<"how many node you want to reverse: ";
    int k ;
    cin>>k;
    ll.head = reverseKLL(ll.head,k);
    ll.display();
    return 0 ;
}