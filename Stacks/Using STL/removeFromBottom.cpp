#include<iostream>
#include<stack>
using namespace std;

void removeBottom(stack<int>&st){
    stack<int>temp;
     while (st.size()!=1) { 
        int curr = st.top();
        st.pop();
        temp.push(curr);
    }
    st.pop();
    while(!temp.empty()){
        int curr = temp.top();
        temp.pop();
        st.push(curr);
    }
}

void removeRecursive(stack<int>&st){
    if(st.size()==1){
        st.pop();
        return;
    }
    int curr = st.top();
    st.pop();
    removeRecursive(st);
    st.push(curr);

}

int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    
    removeRecursive(st);

    while(!st.empty()){
        int curr = st.top();
        st.pop();
        cout<<curr<<"\n";
    }
    return 0;
}