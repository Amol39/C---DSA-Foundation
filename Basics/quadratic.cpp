// program for root of quadratik equation 
// formula r1=(-b+sqrt(b*b-4*a*c))/(2*a) ;
//         r2=(-b-sqrt(b*b-4*a*c))/(2*a) ;

#include<iostream>
#include<cmath>
using namespace std ;
int main(){
    float b,a,c,r1,r2;
    cout<<"Enter the values of b"<<endl;
    cin>>b>>a>>c;
    r1 =(-b+sqrt(b*b-4*a*c))/(2*a);
    r2 =(-b-sqrt(b*b-4*a*c))/(2*a);
    cout<<"Roots of given quadratic equations are "<<r1<<" "<<r2;
    return 0 ;
}