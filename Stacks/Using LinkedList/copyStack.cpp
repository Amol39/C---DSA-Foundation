#include<iostream>
using namespace std;

// copy content of one stack to another in same order 

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
    Node* head ;
    int capacity;
    int currSize;
    public:
    Stack(int c){
        this->capacity = c;
        this->currSize = 0;
        this->head = NULL;
    }
    bool isEmpty(){
        return this->head==NULL;
    }
    bool isFull(){
        return this->currSize==this->capacity;
    }
    
    void push(int data){
        if(this->currSize==this->capacity){
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
            cout<<"UnderFlow\n";
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
        if(this->head==NULL){
            cout<<"UnderFlow\n";
            return -1;
        }
        return this->head->val;
    }

    int size(){
        return this->currSize;
    }
};

void copyStack(Stack& source , Stack& destination){
    Stack temp(source.size());  // temporary stack to store element
    while(!source.isEmpty()){
        int element = source.pop();
        temp.push(element);
    }
    while(!temp.isEmpty()){
        int element = temp.pop();
        destination.push(element);
    }
}

int main(){
    Stack source(5);
    source.push(1);
    source.push(2);
    source.push(3);

    Stack destination(5);
    copyStack(source,destination);
    while(!destination.isEmpty()){
        cout<<destination.pop()<<" ";
    }
    cout<<"\n";

    return 0;
}