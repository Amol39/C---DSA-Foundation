#include<iostream>
using namespace std ;

void printArray(int *arr,int idx , int n ){
    // base case
    if(idx==n){
        return ;
    }
    // self work 
    cout<<arr[idx]<<endl;
    // assumption
    printArray(arr,idx + 1 , n); 
}

int main(){
    int n ; 
    cout<<"Enter size of an array: ";
    cin>>n;
    int *arr= new int[n];
    cout<<"Enter Elements of an array: ";
    for(int i = 0 ; i<n;i++){
        cin>>arr[i];
    }
    printArray(arr,0,n);
    return 0 ;
}