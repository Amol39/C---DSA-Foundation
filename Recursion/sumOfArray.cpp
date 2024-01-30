// find the sum of the values of the array [2,3,5,20,1]

#include<iostream>
using namespace std ;

int sumArray(int *arr,int idx,int n){
    // base case 
    if(idx==n-1){
        return arr[idx];
    }
    return arr[idx]+sumArray(arr,idx+1,n);
}

int main(){
    int n ;
    cout<<"Enter Size of an array: ";
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter Elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sumArray(arr,0,n);
    
return 0 ;
}

 // iterative solution

    // int sum = 0 ;
    // for(int i=0;i<n;i++){
    //     sum = sum+arr[i];
    // }
    // cout<<sum;