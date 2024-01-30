#include<iostream>
using namespace std ;

int main(){
    int n, rev = 0 ;
    cout<<"Enter Number: ";
    cin>>n;
    while(n>0){
        rev = n%10;
        n = n/10;
        cout<<rev<<endl;
    }

}