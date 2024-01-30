// find first and last occurance of a number in given array or vector 

#include<iostream>
#include<vector>
using namespace std ;

int lowerbound(vector<int>input,int target){
    int low = 0 ; 
    int high = input.size()-1;
    int ans = -1 ;

    while(low<=high){
        int mid= low+(high-low)/2;
        if(input[mid]>=target){
            ans = mid ;
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    return ans ;
}

int upperbound(vector<int>input,int target){
    int low = 0 ; 
    int high = input.size()-1;
    int ans = -1;

    while(low<=high){
        int mid = low+(high-low)/2;
        if(input[mid]>target){
            ans = mid ;
            high = mid-1;
        }else {
            low = mid+1;
        }
    }
    return ans ;
}

int main(){
    cout<<"Enter size of vector: ";
    int n;
    cin>>n;
    vector<int>input;
    cout<<"Enter Elements In Vector: ";
    for(int i=0;i<n;i++){
        int x ;
        cin>>x;
        input.push_back(x);
    }
    cout<<"Enter Target Element: ";
    int target;
    cin>>target;
    int lb = lowerbound(input,target);
    vector<int> result ;
    if(input[lb]!=target){
        result.push_back(-1);
        result.push_back(-1);
    }else{
        int ub = upperbound(input,target);
        result.push_back(lb);
        result.push_back(ub-1);
    }
    cout<<result[0]<<" "<<result[1]<<endl;

    return 0 ;
}