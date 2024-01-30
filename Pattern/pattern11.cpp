#include<iostream>
using namespace std ;

// Trangle number patterns 

int main(){
    cout<<"Enter Value: ";
    int n ;
    cin>>n;

    //int stars =1;
    int val = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<val<<" ";
            val++;
        }
        cout<<endl;
        //stars++;
    }
}