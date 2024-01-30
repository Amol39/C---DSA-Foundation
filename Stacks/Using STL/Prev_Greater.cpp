#include<iostream>
#include<vector>
#include<stack>

using namespace std ;

vector<int> nge(vector<int>&arr){
    int n = arr.size();
    vector<int> output(n,-1);
    stack<int> st ;
    st.push(0);
    for(int i = 1 ; i<n;i++){
        while(!st.empty() && arr[i] > arr[st.top()]){
            output[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    return output;
}

int main(){
    int n ; 
    cout<<"how many elements you want to enter: ";
    cin>>n;
    int N = n ;
    vector<int> v ;
    cout<<"Enter Elements: ";
    while(n--){
        int x ;
        cin>>x;
        v.push_back(x);
    }
    vector<int> v1 ;
    for(int i = N-1; i>=0 ; i--){
        v1.push_back(v[i]);
    }
    vector<int> res = nge(v1);

    for(int i = N-1; i>=0 ; i--){
        cout<<res[i]<<" ";
    }
    return 0;
}