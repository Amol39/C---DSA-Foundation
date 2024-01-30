#include<iostream>
using namespace std ;

// Binary Search:
// Write a binary search function to find an element in a sorted array.

int BinarySearch(int arr[],int n,int target){
    int low = 0 ;
    int high = n-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==target) return mid ;
        else if(arr[mid]<target){
            low = mid+1 ;
        }else{
            high = mid - 1;
        }
    }
    return -1 ;
}

int main(){
    int n ;
    cout<<"Enter Size of an Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter Target Elements: ";
    int target;
    cin>>target;
    cout<<"Target element fount at index: "<<BinarySearch(arr,n,target);
    return 0 ;
}