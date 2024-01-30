#include<iostream>
using namespace std ;

// program to print diagonal... 

int main(){
    int n ;
    cout<<"Enter Number: ";
    cin>>n ;

    for(int i = 1 ; i<=n; i++){
        for(int j=1;j<=n;j++){
            if(i==j){
                cout<<"*";
            }else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}