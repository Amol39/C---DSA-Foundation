#include<iostream>
using namespace std ;

int anyBaseToDecimal(int x , int y ){
    int ans = 0 ;
    int power = 1 ;
    while(x!=0){
        int r = x%10;
        x/=10;
        ans+= r*power;
        power *= y ;
    }
    return ans ;
}

int main(){
    cout<<"Enter Number: ";
    int n ;
    cin>>n;
    cout<<"In which base above number present: ";
    int b ;
    cin>>b;
    cout<<anyBaseToDecimal(n,b);
    
}