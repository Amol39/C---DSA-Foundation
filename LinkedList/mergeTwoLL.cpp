/*
Given two sorted linked list,merge them into 1 singly linked list such that the resulting list is also sorted
*/

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

    void insertAtTail(int value){
        Node* new_node = new Node(value);
        if(head==NULL){
            head = new_node;
            return;
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

Node* mergeLinkedList(Node* &head1 , Node* &head2){
    Node* dummyHead = new Node(-1);
    Node* ptr1 = head1;
    Node* ptr2 = head2;
    Node* ptr3 = dummyHead;

    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1->val < ptr2->val){
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
        }else{
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
        }
        ptr3 = ptr3->next;
    }
    if(ptr1!=NULL){
        ptr3->next = ptr1;
    }else{
        ptr3->next = ptr2;
    }

    return dummyHead->next;
}

int main(){
    LinkedList ll;

    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(5);
    ll.display();

    LinkedList ll2;
    ll2.insertAtTail(3);
    ll2.insertAtTail(4);
    ll2.display();

    LinkedList ll3 ;
    ll3.head = mergeLinkedList(ll.head,ll2.head);
    ll3.display();
    return 0 ;
}