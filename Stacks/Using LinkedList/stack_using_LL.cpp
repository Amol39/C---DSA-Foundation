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

class Stack{
    Node* head;
    int capacity;
    int currSize;
    public:
    Stack(int c){
        this->capacity = c;
        this->currSize = 0;
        head = NULL;
    }
    bool isEmpty(){
        return this->head == NULL;
    }
    bool isFull(){
        return this->currSize == this->capacity ;
    }

    void push(int data){
        if(currSize==this->capacity){
            cout<<"Overflow\n";
            return;
        }
        Node* new_node = new Node(data);
        new_node->next = this->head;
        this->head = new_node;
        this->currSize++;
    }
    int pop(){
        if(head==NULL){
            cout<<"Underflow\n";
            return -1;
        }
        Node* new_head = this->head->next;
        this->head->next = NULL;
        Node* tobeRemoved = this->head;
        int result = tobeRemoved->val;
        delete tobeRemoved;
        this->head = new_head;
        return result;
    }

    int getTop(){
        if(head==NULL){
            cout<<"UnderFlow\n";
            return -1;
        }
        return this->head->val;
    }
    
    int size(){
        return this->currSize;
    }

};

int main(){
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.getTop()<<"\n";
    st.push(4);
    st.push(5);
    cout<<st.getTop()<<"\n";
    st.pop();
    cout<<st.getTop()<<"\n";
    
    return 0;
}