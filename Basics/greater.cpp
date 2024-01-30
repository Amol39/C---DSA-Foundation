#include<iostream>
using namespace std ;
int main(){
    
    //program to find greatest in two numbers 

    int a , b ;
    cout<<"Enter value of a and b "<< endl ;
    cin>>a>>b;
    if(a>b){
        cout<<"A is greater than b " ;
    }else if(a<b){
        cout<<"B is greater than a ";
    }else{
        cout<<"A and B are equal numbers " ;
    }
}