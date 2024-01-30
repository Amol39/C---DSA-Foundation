#include<iostream>
using namespace std ;

class Node{
    public:

    int val ;
    Node *next;

    Node(int data){
        val = data ;
        next = NULL;      // next value by default is NULL 
    }

};

void insertAtHead(Node * &head, int val){
    Node *new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}

void insertAtTail(Node* &head, int val){
    Node *new_node = new Node(val);
    Node *temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = new_node;   // no need to pass new_node->next bcz by default it is null 
}

void insertAtPosition(Node* &head,int val , int pos){
    if(pos==0){
       insertAtHead(head,val);
       return ; 
    }
    Node *new_node = new Node(val);
    Node *temp = head;
    int current_pos=0;
    while(current_pos!=pos-1){
        temp = temp->next;
        current_pos++;
    }
    // temp pointing to node at pos-1
    new_node->next = temp->next;
    temp->next = new_node;

}

void updateAtPosition(Node* &head , int k , int val){
   Node *temp = head;
   int curr_pos=0;
   while(curr_pos!=k){
    temp = temp->next;
    curr_pos++;
   }
   // temp is pointing to k the position
   temp->val=val;
}

void deleteAthead(Node* &head){
    Node *temp = head;  // node to be deleted ;
    head = head->next;
    free(temp);
}

void deleteAtTail(Node* &head){
    Node *second_last = head;
    while(second_last->next->next!=NULL){
        second_last = second_last->next;
    }
    // now second_last points to second last node
    Node *temp = second_last->next;   // node to be deleted 
    second_last->next=NULL;
    free(temp);
}

void deleteAtPosition(Node*&head,int pos){
    if(pos==0){
        deleteAthead(head);
        return ;
    }
    int curr_pos = 0 ;
    Node *prev= head;
    while(curr_pos!=pos-1){
        prev = prev->next;
        curr_pos++;
    }
    // now prev pointing to the pos-1 position 
    Node *temp = prev->next;   // node to be deleted 
    prev->next = prev->next->next;  // assign the value of pos+1 node 
    free(temp);

}

void display(Node *head){
    Node *temp = head ;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node *head=new Node(1);
    //insertAtHead(head,2);
    //insertAtHead(head,1);

     insertAtTail(head,2);
     insertAtTail(head,3);
     insertAtTail(head,4);

    // insertAtPosition(head,4,1);
    // updateAtPosition(head,2,5);
    // display(head);
    // deleteAthead(head);
    // display(head);
    // updateAtPosition(head,2,6);
    // display(head);
    // insertAtPosition(head,7,3);
    // display(head);
    // insertAtPosition(head,8,4);
    // display(head);
    // updateAtPosition(head,3,1);
    // display(head);

    deleteAtPosition(head,3);
    display(head);
    return 0 ;
}