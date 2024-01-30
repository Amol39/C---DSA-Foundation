#include<iostream>
using namespace std ;

int largest(int arr[],int n ){
    int res = 0 ;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[res]){
            res = i ;
        }
    }
    // return arr[res] ;    // if you return this it prints value
    return res ;           // it gives index number .
}
int main(){
    int arr[]={10,20,40,30};
    cout<<largest(arr,4);

    return 0 ;
}