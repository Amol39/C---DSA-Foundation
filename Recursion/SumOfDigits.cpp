// Given an integer, find out the sum of its digits using recursion 

#include<iostream>
using namespace std ;

int sum(int n ){
    if(n>=0 and n<=9){
        return n ;
    }
    int ans = sum(n/10)+sum(n%10);
    return ans ;
}

int main(){
    int n ;
    cout<<"Enter Number: ";
    cin>>n ;
    cout<<"Sum of Given number is: "<<sum(n);
    return 0 ;
}