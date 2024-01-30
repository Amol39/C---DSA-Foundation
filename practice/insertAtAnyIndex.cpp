#include<iostream>
#include<stack>

using namespace std;

void insertAtAnyIndex(stack<int>&st,int idx,int x){
    stack<int>temp;
    int n = st.size();
    int count = 0;

    while(count< n-idx){
        count++;
        int curr = st.top();
        temp.push(curr);
        st.pop();
    }
    st.push(x);
    while(!temp.empty()){
        int curr = temp.top();
        st.push(curr);
        temp.pop();
    }
}

int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    insertAtAnyIndex(st,1,10);

    while(!st.empty()){
        int curr = st.top();
        cout<<curr<<"\n";
        st.pop();
    }
    return 0;
}