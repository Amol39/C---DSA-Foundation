#include<iostream>
using namespace std ;
int main(){

//Write a program to check whether a triangle is valid or not if angles are given using if else.

//Approach: A triangle is valid if sum of its two sides is greater than the third side. If three sides are a, b and c, then three conditions should be met. 
 

    int a , b , c ;
    cout<<"Enter three sides of tringle"<<endl;
    cin>>a>>b>>c;
    if((a+b)>c){
        if((a+c)>b){
            if((b+c)>a){
                cout<<"triangle is valid";
            }else cout<<"triangle is invalid";
        }else cout<<"invalid triangle";
    }else cout<<"Invalid triangle";

    return 0 ;
}