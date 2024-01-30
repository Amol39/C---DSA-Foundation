// find max element in array 

#include<iostream>
using namespace std ;

int maxArray(int *arr, int idx, int n ){
    // base case
    if(idx==n-1){
        return arr[idx];
    }
    return max(arr[idx],maxArray(arr,idx+1,n));
}

int main(){
    int n ;
    cout<<"Enter size of an array: ";
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter Elements of an array: ";
    for(int i = 0 ; i<n;i++){
        cin>>arr[i];
    }
    cout<<"max element in given array is : "<<maxArray(arr,0,n);
    return 0 ;   
}


// iterative solution 

// int max = 0 ;
//     for(int i = 0 ; i<n;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     cout<<"Max element in array is: "<<max;
    