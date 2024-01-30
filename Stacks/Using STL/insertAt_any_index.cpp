#include<iostream>
#include<stack>
using namespace std ;

void inserAt(stack<int>&st,int x ,int idx){
    stack<int>temp;
    int count = 0;
    int n = st.size();

    while(count < n-idx){
        count++; 
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

int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    inserAt(st,100,3);
    while(!st.empty()){
        int curr = st.top();
        st.pop();
        cout<<curr<<" ";
    }
    cout<<"\n";
    return 0 ;
}