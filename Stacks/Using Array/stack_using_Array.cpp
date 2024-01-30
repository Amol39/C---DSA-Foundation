#include<iostream>
using namespace std ;

// create stack using array

class Stack{
    int capacity;
    int *arr;
    int top;
    public:

    Stack(int c){
        this->capacity = c;
        arr = new int[c];
        this->top = -1;
    }

    void push(int data){
        if(this->top == this->capacity-1){
            cout<<"OverFlow\n";
            return;
        }
        this->top++;
        this->arr[this->top] = data;
    }
    int pop(){
        if(this->top == -1){
            cout<<"Underflow\n";
            return -1;
        }
        return this->top--;
    }
    int get_top(){
        if(this->top==-1){
            cout<<"Underflow\n";
            return -1;
        }
        return arr[this->top];
    }

    bool is_empty(){
        return this->top==-1;
    }

    int size(){
        return this->top+1;
    }

    bool is_full(){
        return this->top = this->capacity-1;
    }

};

int main(){
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.get_top()<<"\n";
    st.push(4);
    st.push(5);
    cout<<st.get_top()<<"\n";
    st.pop();
    cout<<st.get_top()<<"\n";
    return 0;
}