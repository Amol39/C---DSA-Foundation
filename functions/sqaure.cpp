// write a function to print square of first 5 natural numbers 

#include<iostream>
using namespace std ;

int sqaure(int num){
    return num*num;
}

int main(){
    cout<<"Enter the range you want to print square of those numbers: ";
    int num ;
    cin>>num ;
    for(int i=1;i<=num;i++){
        cout<<sqaure(i)<<" ";
    }
    return 0 ;
}