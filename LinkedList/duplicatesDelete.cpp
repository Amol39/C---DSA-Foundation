#include<iostream>
using namespace std ;

class Node{
    public:
    int val ;
    Node *next;

    Node(int data){
        val = data;
        next = NULL;
    }
};

class LinkedList{
    public:
    Node *head;

    LinkedList(){
        head = NULL;
    }
    void insertAtTail(int val){
        Node *new_node= new Node(val);
        if(head==NULL){
            head = new_node;
            return ;
        }
        Node* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = new_node;
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

void deleteDuplicates(Node* &head){
    Node* curr_node = head;
    while(curr_node!=NULL){
        while(curr_node->next!=NULL && curr_node->val==curr_node->next->val){
            // delete curr->next;
            Node *temp = curr_node->next;
            curr_node->next = curr_node->next->next;
            free(temp);
        }
        // this loop will end when curr_node->value and curr_node->next value is different or linked list ends 
        curr_node = curr_node->next;
    }
}

int main(){
    LinkedList ll ;
    int n , value;
    cout<<"How many elements you want to insert: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>value;
        ll.insertAtTail(value);
    }
    ll.display();
    deleteDuplicates(ll.head);
    ll.display();
    return 0 ;
}