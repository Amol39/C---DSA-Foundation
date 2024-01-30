// first occurance of a target 

#include<iostream>
#include<vector>
using namespace std ;

int first_occurance(vector<int>arr,int target){

    /* Time  O(log n)
       space O(1) 
    */

    int ans = -1 ;
    int low = 0 ;
    int high = arr.size()-1;
    while(low<=high){
        int mid = low +(high-low)/2;
        if(arr[mid]==target){
            ans = mid ;
            high = mid-1;
        }else if(arr[mid]<target){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    return ans ;
}
int main(){
    cout<<"Enter size of vector: ";
    int n ;
    cin>>n;
    vector<int>arr;
    cout<<"Enter Elemets of an vector: ";
    for(int i =0 ;i<n;i++){
        int x ;
        cin>>x;
        arr.push_back(x);
    }
    cout<<"Enter Target Element: ";
    int target ;
    cin>>target;
    cout<<first_occurance(arr,target)<<endl;

    return 0 ;

}


