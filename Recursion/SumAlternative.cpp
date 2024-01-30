// given a number n . find the sum of natural numbers till n but with alternate signs .
// that means if n = 5 then you have return 1-2+3-4+5 = 3 as your ans .

#include<iostream>
using namespace std ;

int SumAlternative(int n ){
    int sum ;
    if(n==0){
        return 0  ;
    }
    return SumAlternative(n-1) + ((n%2==0)?(-n):(n));
}

int main(){
    int n ;  
    cout<<"Enter Number: ";
    cin>>n;
    cout<<SumAlternative(n);
    return 0 ;
}




//                                     Iterative solution .

 // int sum = 0 ;
    // for(int i = 1;i<=n;i++){
    //     if(i%2==0){
    //         sum = sum+(-i);
    //     }else{
    //         sum = sum+i;
    //     }
    // }
    // cout<<sum;

