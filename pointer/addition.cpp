#include<iostream>
using namespace std ;

int main(){
    int x , y ;
    cout<<" Enter value of X and Y ";
    cin>>x>>y;

    int *ptr = &x; // &X fetch the address of x 
    int *ptrY = &y; // &Y fetch the address of y 
    
    int result ;
    int *ptr_Result = &result ;
    
    *ptr_Result = *ptr + * ptrY ;

    cout<<"Addition of two pointer variable is: "<<*ptr_Result<<endl;

}