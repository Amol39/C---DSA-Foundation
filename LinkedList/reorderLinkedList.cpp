// you are given the head of singly linked-list. the first list can be represented as: L0->L1->....->Ln-1->Ln. Reorder the list to be on the following form: L0->Ln->L1->Ln-1->L2->Ln-2->...

#include<iostream>
using namespace std ;

class Node{
    public:
    int val;
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

Node* reorderLinkedList(Node* &head){
    //1 find middle element of linked list
    Node* slow = head;
    Node* fast = head;

    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    // now slow pointing to middle element
    //2. seperate the linkedlist and reverse second half

    Node* curr = slow->next;
    slow->next = NULL;
    Node* prev = slow;

    while( curr!=NULL){
        Node* nextPtr = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextPtr;
    }
    // 3. merging the two half of the linkedList;
    Node* ptr1 = head;
    Node* ptr2 = prev;
    while(ptr1!=ptr2){
        Node* temp = ptr1->next;
        ptr1->next = ptr2;
        ptr1 = ptr2;
        ptr2 = temp;
    }
    return head;
}

int main(){
    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    //ll.insertAtTail(6);
    ll.display();

    ll.head = reorderLinkedList(ll.head);
    ll.display();
    return 0;
}