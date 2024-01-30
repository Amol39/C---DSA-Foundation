#include<iostream>
#include<vector>
#include<stack>

using namespace std ;

vector<int> nse(vector<int>&arr){
    int n = arr.size();
    vector<int> output(n,-1);
    stack<int> st ;
    st.push(0);
    for(int i = 1 ; i<n;i++){
        while(!st.empty() && arr[i]<arr[st.top()]){
            output[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    return output;
}

int main(){
    int n ;
    cout<<"How many elements you want to enter: ";
    cin>>n ;
    int N = n ;

    vector<int>V;
    cout<<"Enter Elements: ";
    while(n--){
        int x ;
        cin>>x;
        V.push_back(x);
    }

    vector<int>V1;
    for(int i = N-1 ; i>=0;i--){
        V1.push_back(V[i]);
    }

    vector<int> res = nse(V1);

    for(int i = N-1 ; i>=0;i--){
        cout<<res[i]<<" ";
    }

    return 0 ;
}