#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};
class Stack {
    Node* head;
    int currSize;

public:
    Stack() {
        this->currSize = 0;
        head = NULL;
    }

    bool isEmpty() {
        return this->head == NULL;
    }

    void push(int data) {
        Node* new_node = new Node(data);
        new_node->next = this->head;
        this->head = new_node;
        this->currSize++;
    }

    int pop() {
        if (this->head == NULL) {
            cout << "Underflow\n";
            return -1;
        }
        Node* new_head = this->head->next;
        this->head->next = NULL;
        Node* tobeRemoved = this->head;
        int result = tobeRemoved->val;
        delete tobeRemoved;
        this->head = new_head;
        this->currSize--;
        return result;
    }

    int getTop() {
        if (this->head == NULL) {
            cout << "Underflow\n";
            return -1;
        }
        return this->head->val;
    }

    int size() {
        return this->currSize;
    }
};


void insertAtbottom(Stack &st , int x){
    Stack temp;
    while(!st.isEmpty()){
        int element = st.getTop();
        st.pop();
        temp.push(element);
    }
    st.push(x);
    while(!temp.isEmpty()){
        int element = temp.getTop();
        temp.pop();
        st.push(element);
    }
}
int main(){
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
 //   cout<<st.getTop()<<"\n";
    st.push(4);
    //st.push(5);
   // cout<<st.getTop()<<"\n";
   // st.pop();
   // cout<<st.getTop()<<"\n";

    insertAtbottom(st,10);
    while(!st.isEmpty()){
        cout<<st.pop()<<" ";
    }
    cout<<"\n";
    return 0;
}