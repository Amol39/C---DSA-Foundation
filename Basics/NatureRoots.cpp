#include<iostream>
using namespace std ;
int main(){

    // write a program to check nature of roots
    
    int a , b ,c ;
    cout<<"Enter values of a b and c"<<endl;
    cin>>a>>b>>c;
    float d = b*b-4*a*c;
    if(d==0){
        cout<<"Roots are real and same  ";
    }else if(d>0){
        cout<<"Roots are real and different ";
    }else cout<<"Roots are complex and different ";
     
    return 0 ; 

}