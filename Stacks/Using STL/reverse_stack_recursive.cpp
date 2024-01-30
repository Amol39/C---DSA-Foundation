#include<iostream>
#include<stack>
using namespace std ;

void inserAtBottom(stack<int>&st , int x){
    stack<int>temp;
    while(!st.empty()){
        int curr = st.top();
        st.pop();
        temp.push(curr);
    }
    st.push(x);
    while(!temp.empty()){
        int curr = temp.top();
        temp.pop();
        st.push(curr);
    }
}

void reverseRecursive(stack<int>&st){
    if(st.empty()){
        return;
    }
    int curr = st.top();
    st.pop();
    reverseRecursive(st);
    inserAtBottom(st,curr);
}

int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    reverseRecursive(st);
    while(!st.empty()){
        int curr = st.top();
        st.pop();
        cout<<curr<<"\n";
    }
    return 0;
}