#include<iostream>
using namespace std ;
int main(){
    int b , h ;
    float area ;

    cout<<"Enter hight of traingle"<<endl;
    cin>>h;
    cout<<"Enter base of traingle"<<endl;
    cin>>b;

    area = float(b*h)/2;
    cout<<"Area of traingle is "<<area;

    return 0 ;
}