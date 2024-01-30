// program for sum of natural number 
// formule  sum = n*(n+1)/2 ;

#include <iostream>
using namespace std;
int main(){
    int n ;
    float sum = 0 ;
    // cout<<"Enter number "<<endl;
    // cin>>n;
    // sum = n*(n+1)/2;
    // cout<<"sum of n natural number is "<<sum;

    // return 0 ;
    cout<<"Enter value of n = ";
    cin>>n;
    for(int i = 0 ; i<=n;i++){
        sum = sum+i;
    }
    cout<<"sum is = "<< sum ;
}