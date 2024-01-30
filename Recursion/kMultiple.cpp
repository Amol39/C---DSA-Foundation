// Given a number num and a value k . print k multiple num.
// num = 12 and k = 5
// output 12, 24, 36, 48 , 60 ;

#include<iostream>
using namespace std ;

void kMultiple(int num , int k){
    if(k<1){
        return ;
    }
    kMultiple(num,k-1);
    cout<<num * k <<" ";
}

int main(){
    int num , k ;
    cout<<"Enter Number: ";
    cin>>num;
    cout<<"Enter K the value: ";
    cin>>k;

    kMultiple(num,k);
    return 0 ;
}