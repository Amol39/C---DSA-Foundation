#include<iostream>
using namespace std ;

int main(){
    cout<<"Enter Size of an array ";
    int n ;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    for(int i=n;i>=1;i--){
        cout<<arr[i]<<" ";
    }
    return 0 ;
}