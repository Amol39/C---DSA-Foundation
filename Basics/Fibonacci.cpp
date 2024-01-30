#include<iostream>
using namespace std ;

int main(){
    int sum = 0 ;
    int a = 0;
    int b = 1;
    int n ;

    cout<<"Enter Range ";
    cin>>n ;
    for(int i =0;i<n;i++){
        cout<<a<<" ";
        sum =a+b;
        a=b;
        b=sum;
    }
    return 0 ;
}