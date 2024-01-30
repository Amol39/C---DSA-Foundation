// given two numbers a and b , write a program to print all prime numbers present between a and b 

#include<iostream>
using namespace std ;

bool is_Prime(int num ){
    if(num<=1){
        return false;
    }
    for(int i = 2 ; i*i<=num;i++){
        if(num%i==0){
            return false ;
        }
    }return true ;

}

int main(){
    int a , b ;
    cout<<"Enter starting element: ";
    cin>>a;
    cout<<"Enter ending element: ";
    cin>>b;

    for(int i = a;i<=b;i++){
        if(is_Prime(i)){
            cout<<i<<" ";
        }
    }
    return 0 ;

}