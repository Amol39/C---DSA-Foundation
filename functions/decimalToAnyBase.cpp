#include<iostream>
using namespace std ;

int DecimalToAnyBase(int x , int y ){
    int ans = 0 ;
    int power = 1;
    while(x!=0){
        int r = x%y;
        x = x/y;           // x/=y;                     reduce by base 
        ans = ans+(r*power);    // ans+=(r+power);
        power = power*10;      // power*=10 ;
    }
    return ans ;
}

int main(){
    cout<<"Enter Number: "<<endl;
    int n ;
    cin>>n;
    cout<<"Enter base which you want to convert above number: "<<endl;
    int b;
    cin>>b;

    cout<<DecimalToAnyBase(n,b)<<endl;

}