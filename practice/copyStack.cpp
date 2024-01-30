#include<iostream>
#include<stack>
using namespace std;

stack<int>copyStack(stack<int>&input){
    stack<int>temp;
    while(!input.empty()){
        int curr = input.top();
        temp.push(curr);
        input.pop();
    }
    stack<int>result;
    while(!temp.empty()){
        int curr = temp.top();
        result.push(curr);
        temp.pop();
    }
    return result;
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    stack<int> res =copyStack(st); 

    while(!res.empty()){
        int curr = res.top();
        cout<<curr<<"\n";
        res.pop();
    }
    
    return 0;
}