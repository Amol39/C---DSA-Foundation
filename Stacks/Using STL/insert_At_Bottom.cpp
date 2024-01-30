#include<iostream>
#include<stack>
using namespace std ;

void insertAtBottom(stack<int>&st,int x){
    stack<int>temp;
    while(!st.empty()){
        int element = st.top();
        st.pop();
        temp.push(element);
    }
    st.push(x);
    while(!temp.empty()){
        int element = temp.top();
        temp.pop();
        st.push(element);
    }
}

void atBottom(stack<int>&st,int x){
    if(st.empty()){
        st.push(x);
        return;
    }
    int curr = st.top();
    st.pop();
    atBottom(st,x);
    st.push(curr);
}

int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    //insertAtBottom(st,10);
    atBottom(st,100);
    while(!st.empty()){
        int curr = st.top();
        st.pop();
        cout<<curr<<" ";
    }
    cout<<"\n";
    return 0;
}