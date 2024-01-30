// Given two number p and q , find the value p^q using a recursive function.

#include<iostream>
using namespace std ; 

int power(int p , int q){
    // base 
    if(q==0){
        return 1 ;
    }
   // int ans = p * power(p,q-1); // recursive function
   // return ans 


   // optimize solution
   if(q%2==0){
    //if q is even 
    int ans = power(p,q/2);
    return ans*ans;
   }else{
    // if q is odd
    int ans = power(p,(q-1)/2);
    return p * ans * ans ;
   }

}

int main(){
    int p , q ;
    cout<<"Enter the Number: ";
    cin>>p;
    cout<<"Enter power: ";
    cin>>q ;
    cout<<"The result of the power to given number is : "<<power(p,q);
    return 0 ;

}