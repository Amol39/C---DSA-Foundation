#include<iostream>
using namespace std ;

int findElement(int *arr ,int n , int d){
    for(int i = 0 ;i<n;i++){
        if(arr[i]==d){
            return i ;
        }
    }
}

int main(){
    int n , d ;
    cout<<"Enter Size of an array: ";
    cin>>n;
    int *arr =new int[n];
    cout<<"Enter Elements of an array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter Number which you want to find: ";
    cin>>d;

    cout<<findElement(arr,n,d)<<endl;

    return 0 ;

}