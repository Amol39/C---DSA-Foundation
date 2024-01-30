#include<iostream>
using namespace std ;

class Node{
    public:
    int val ;
    Node *next;

    Node(int data){
        val = data;
        next=NULL;
    }
};

class LinkedList{
    public:
    Node* head;

    LinkedList(){
        head = NULL;
    }
    void insertAtTail(int value){
        Node *new_node= new Node(value);
        if(head==NULL){  // linked list is empty 
            head = new_node;
            return ;
        }
        Node *temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next= new_node;
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

void deleteAlternateNodes(Node* &head){
    Node* curr_node = head;
    while(curr_node!=NULL && curr_node->next!=NULL){
        Node *temp = curr_node->next;  // node to be deleted 
        curr_node->next = curr_node->next->next;
        free(temp);
        curr_node=curr_node->next;
    }
}

int main(){
    LinkedList ll ;   // object of linkedList 

    int n , value ;
    cout<<"How many elements you want to insert in linkedList: ";
    cin>>n;
    cout<<"Insert Element: ";
    for(int i=0;i<n;i++){
        cin>>value;
        ll.insertAtTail(value);
    }

    ll.display();
    deleteAlternateNodes(ll.head);
    ll.display();
    return 0 ;
}