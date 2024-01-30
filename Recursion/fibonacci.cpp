#include<iostream>
using namespace std ;

int fib(int n){
    if(n==0 || n==1){
        return 1 ;
    }
    int ans = fib(n-1)+fib(n-2);
    return ans ;
}
int main(){
    int num;
    cout<<"Enter Number from which you want to print first fibonacci series: ";
    cin>>num;
    cout<<fib(num);
    return 0 ;
}