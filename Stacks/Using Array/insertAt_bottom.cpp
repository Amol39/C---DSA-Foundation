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
            cout<<"Overflow\n";
            return;
        }
        this->top++;
        this->arr[top] = data;
    }

    int pop(){
        if(this->top==-1){
            cout<<"Underflow\n";
            return -1;
        }
        int poppedValue = arr[this->top];
        this->top--;
        return poppedValue;
    }

    int getTop(){
        if(this->top==-1){
            cout<<"Underflow\n";
            return -1;
        }
        return arr[this->top];
    }

    bool isEmpty(){
        return this->top==-1;
    }
    bool isFull(){
        return this->top == this->capacity-1;
    }

    int size(){
        return this->top+1;
    }

};

void insertAtBottom(Stack &st , int x){
    int n = st.size();
    Stack temp(n);
    while(!st.isEmpty()){
        int element = st.pop(); 
        temp.push(element);
    }
    st.push(x);
    while(!temp.isEmpty()){
        int element = temp.pop();
        st.push(element);
    }
}

int main(){
    Stack st(6);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    insertAtBottom(st,10);
    while(!st.isEmpty()){
        cout<<st.pop()<<" ";
    }
    cout<<"\n";
    return 0;
}