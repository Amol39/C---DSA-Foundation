#include<iostream>
#include<vector>
using namespace std ;

int peakMountainArray(vector<int> input){
    int low = 1 , high = input.size()-1;
    int ans= -1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(input[mid]>input[mid-1]){
            ans = mid ;
            low = mid+1;
        }else{
            high = mid-1 ;
        }
    }
    return ans;
}

int main(){
    int n ; 
    cout<<"Enter size of vector: ";
    cin>>n;
    vector<int>input;
    for(int i = 0 ; i<n;i++){
        int x ;
        cin>>x;
        input.push_back(x);
    }
    cout<<peakMountainArray(input)<<" ";
    return 0 ;
}