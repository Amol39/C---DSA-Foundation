#include<iostream>
using namespace std;

class Stack{
    int capacity;
    int* arr;
    int top;
    public:
    Stack(int c){
        this->capacity = c;
        arr = new int[c];
        top = -1;
    }
    void push(int data){
        if(this->top==this->capacity-1){
            cout<<"overrflow\n";
            return ;
        }
        this->top++;
        this->arr[top] = data;
    }
    int pop(){
    if(this->top==-1){
        cout<<"underflow\n";
        return -1;
    }
    int poppedValue = arr[this->top];
    this->top--;
    return poppedValue;
    }
int getTop(){
        if(this->top==-1){
            cout<<"underflow\n";
            return -1;
        }
        return arr[this->top];
    }
    bool isEmpty(){
        return this->top == -1;
    }
    bool isFull(){
        return this->top == this->capacity-1;
    }
    int size(){
        return this->top+1;
    }  
};

void copyStack(Stack& source, Stack& destination) {
    Stack temp(5);
    while (!source.isEmpty()) {
        int element = source.pop();
        temp.push(element);
    }
    while(!temp.isEmpty()){
        int element = temp.pop();
        destination.push(element);
    }
}

int main() {
    Stack sourceStack(5);
    sourceStack.push(1);
    sourceStack.push(2);
    sourceStack.push(3);

    Stack destinationStack(5);
    copyStack(sourceStack, destinationStack);

    int topElement = destinationStack.getTop();

    // Print the contents of the destination stack to verify the copy
    while (!destinationStack.isEmpty()) {
        cout << destinationStack.pop() << " ";
    }
    cout << "\n";
    cout<<"Top elemet of given stack is: "<<topElement;
    return 0;
}