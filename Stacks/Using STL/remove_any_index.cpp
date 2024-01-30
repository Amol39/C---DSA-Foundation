#include<iostream>
#include<stack>
using namespace std;

void removeAtIndex(stack<int>&st,int idx){
    stack<int>temp;
    int n = st.size();
    int count = 0;
    while(count < n-idx-1){
        count++;
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

int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
   
    removeAtIndex(st,1);
    while(!st.empty()){
        int curr = st.top();
        st.pop();
        cout<<curr<<"\n";
    }
    return 0 ;
}