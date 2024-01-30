#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

vector<int> TargetSum(vector<int>&v,int target){
    int n = v.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(v[i]+v[j]==target){
                return {i,j};
            }
        }
    }
    return {};
}

int main(){
    int n ;
    cout<<"Enter Size of Vector: ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter Elements: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int target;
    cout<<"Enter Target Element: ";
    cin>>target;
    vector<int> result = TargetSum(v,target);
    if(result.size()==2){
        cout<<result[0]<<" "<<result[1];
    }else{
        cout<<"Element not found ";
    }
    return 0;
}