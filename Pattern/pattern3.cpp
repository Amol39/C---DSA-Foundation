#include<iostream>
using namespace std ;

int main(){
    cout<<"Enter Number : ";
    int n ;
    cin>>n;

    // for(int i =1 ; i<=n;i++){
    //    // inner loop for space 
    //    for(int j = 1 ;j<=n-i;j++){
    //     cout<<"\t";
    //    }

    //    // inner loop for star 
    //    for(int j = 1 ;j<=i;j++){
    //     cout<<"*\t";
    //    }
    //    cout<<endl;

    int spaces = n-1;
    int stars = 1;

    // another approach 

    for(int i=1 ; i<=n;i++){

        // for spaces 
        for(int j =1;j<=spaces;j++){
            cout<<"\t";
        }
        // for satrs 

        for(int j=1;j<=stars;j++){
            cout<<"*\t";
        }
        cout<<endl;              // for the next line
        spaces--;
        stars++;
 
    }
}