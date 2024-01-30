#include<iostream>
using namespace std ;

/*Find the Largest Number:
Given an array of integers, write a function to find the largest number.
*/

int max(int arr[],int n ){
    int max = 0 ;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int n ;
    cout<<"Enter size of an array: ";
    cin>>n;
   // int *arr = new int[n];             // dynamic memory allocation using new in heap memory 
    int arr[n];                   // it creates in stack , if array creates like this no need to deallocate memory
    cout<<"Enter Elements in array: ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Max element in given array is: "<<max(arr,n);

  //  delete []arr;       // deallocate heap memory to avoid memory leakage problem 
    return 0 ;

}