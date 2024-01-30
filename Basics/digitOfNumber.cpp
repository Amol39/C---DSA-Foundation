#include<iostream>
using namespace std ;

int main() {
    int n ;
    int rev =0;
    cout<<"Enter Number ";
    cin>>n;
    while(n>0){
        int digit = n%10;
        rev = rev*10+digit;
        n = n/10;
    }
    while(rev>0){
        int digit=rev%10;
        cout<<digit<<endl;
        rev = rev/10;
    }
    return 0 ;

}