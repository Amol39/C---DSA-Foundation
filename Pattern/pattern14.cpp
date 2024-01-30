#include<iostream>
using namespace std ;

// table print pattern 
int main(){
    cout<<"Enter Value: ";
    int n ;
    cin>>n;
    for(int i=1;i<=10;i++){
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
    return 0 ;

}