#include<iostream>
#include<stack>
using namespace std;

void removeAtIndex(stack<int>&st,int idx){
    int n = st.size();
    int count = 0;
    stack<int> temp;

    while(count<n-idx-1){
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
    st.push(1);  // 0
    st.push(2);  // 1
    st.push(3);  // 2
    st.push(4);  // 3
    st.push(5);  // 4

    removeAtIndex(st,0);

    while(!st.empty()){
        int curr = st.top();
        cout<<curr<<"\n";
        st.pop();
    }
    return 0;
}