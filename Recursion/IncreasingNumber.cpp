// Given a number n . find the increasing sequence from 1 to n , without using any loop

#include<iostream>
using namespace std ;

void IncreaseNumber(int n){
    if(n<1){
        return  ;
    }
    IncreaseNumber(n-1);
    cout<<n<<" ";
}

int main(){
    int n ;
    cout<<"Enter Number: ";
    cin>>n;
    IncreaseNumber(n);
    return 0 ;
}