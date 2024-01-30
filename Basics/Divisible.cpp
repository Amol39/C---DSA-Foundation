#include<iostream>
using namespace std ;
int main(){
    
    //Write a program to check whether a number is divisible by 5 and 11 or not , using if else.
    int num ;
    cout<<"Enter Number = ";
    cin>>num;
    if(num%5==0 && num%11==0){
        cout<<"Number is divisible by 5 and 11 ";
    }else if(num%5==0){
        cout<<"Number is divisible by 5 ";
    }else if (num%11==0){
        cout<<"Number is divisible by 11 ";
    }else{
        cout<<"Number is not divisible by 5 and 11 ";
    }
}