// program to find perimeter of rectangle 
// formula for perimeter of rectangle is 2*(l+b) ;  l = length and b = base 

#include<iostream>
using namespace std ;
int main(){
    int l,b ;
    float perimeter;

    cout<<"Enter length of perimeter"<<endl;
    cin>>l ;
    cout<<"Enter base of perimeter"<<endl;
    cin>>b ;

    perimeter = float(2*(l+b));
    cout<<"perimeter of rectangle is "<<perimeter;

    return 0 ;

}