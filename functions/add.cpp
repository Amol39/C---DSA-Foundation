#include<iostream>
using namespace std ;

int add(int x,int y){
    int z = x+y;
    return z;
}

int main()
{
    int a ,b,c;
    cout<<"Enter values of a and b = ";
    cin>>a>>b;
    c = add(a,b);
    cout<<"sum is "<<c;

    return 0 ;

}