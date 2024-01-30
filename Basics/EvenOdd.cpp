#include<iostream>
using namespace std ;
int main(){

    //Check number is even or odd 

    int num ;
    // cout<<"Enter number = ";
    // cin>>num;
    // if(num%2==0){
    //     cout<<"Number is even ";
    // }else{
    //     cout<<"Number is odd";
    // }

    cout<<"Enter Range:";
    cin>>num;
    int sum = 0 ;
    int odd = 0;
    for(int  i = 1 ; i<=num;i++){
        if(i%2==0){
            sum = sum+i;
        }else{
            odd = odd+i;
        }
    }
    cout<<"Sum of Even number: "<<sum<<endl;
    cout<<"Sum of odd number: "<<odd;
}