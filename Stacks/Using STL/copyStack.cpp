#include<iostream>
#include<stack>
using namespace std ;

stack<int>copyStack(stack<int>&input){
    stack<int>temp;
    while(! input.empty()){
        int element = input.top();
        input.pop();
        temp.push(element);
    }
    stack<int>result;
    while(!temp.empty()){
        int element = temp.top();
        temp.pop();
        result.push(element);
    }
    return result;
}

void copyStackRecursive(stack<int>&st , stack<int>&result){
    if(st.empty()) return;
    int curr = st.top();
    st.pop();
    copyStackRecursive(st,result);
    result.push(curr);
}
int main(){
    stack<int>input;
    input.push(1);
    input.push(2);
    input.push(3);
    input.push(4);

   // stack<int>res = copyStack(input);
    stack<int>res;
    copyStackRecursive(input,res);
    while(!res.empty()){
        int curr = res.top();
        res.pop();
        cout<<curr<<" ";
    }
    cout<<"\n";
    return 0;
}