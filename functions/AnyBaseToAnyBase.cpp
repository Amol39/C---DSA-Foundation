#include<iostream>
using namespace std ;

int decimalToAnyBase(int x , int y ){
    int ans = 0 ;
    int power = 1;

    while(x!=0){
        int r = x%y;
        x/=y;
        ans += r*power;
        power*=10;
    }
    return ans ;
}

int anyBaseToDecimal(int x , int y ){
    int ans = 0 ;
    int power= 1 ;
    while(x!=0){
        int r = x%10;
        x/=10;
        ans += r*power;
        power *=y;
    }
    return ans ;
}
int main(){
    int n,b1,b2;
    cout<<"Enter Number: ";
    cin>>n;
    cout<<"Enter Base in which above number present: ";
    cin>>b1;
    cout<<"Enter in which base you want to convert above number: ";
    cin>>b2;

    int decno = anyBaseToDecimal(n,b1);
    int ans = decimalToAnyBase(decno,b2);
    cout<<ans<<endl;


}