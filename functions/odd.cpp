// given two numbers a and b , write a program using function to print all the odd between them 

#include<iostream>
using namespace std ;

void odd(int a , int b ){
    for(int i = a ; i<=b;i++){
        if(i%2!=0){
            cout<<i<<" ";
        }
    }
}
int main(){
    int a , b ;
    cout<<"Enter starting element: ";
    cin>>a;
    cout<<"Enter ending element: ";
    cin>>b;
    odd(a,b);

    return 0 ;

}