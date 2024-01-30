#include<iostream>
using namespace std ;

// constructor is used to initial an object 
// this is a function which is called when ans obj is created 
// same name as class name 


class Rectangle{
    public: 

    int l ;
    int b;

    Rectangle(){ // default constructor 
    l=0;
    b=0;
    }

    Rectangle(int x , int y){ // parameterised constructor 
    l = x ;
    b = y ;

    }

    Rectangle(Rectangle& r){// copy constructor - initialise an object by another existing obj 
    l = r.l;
    b = r.b;
    }

};

int main(){
    Rectangle r1 ;   // default constructor 
    cout<<r1.l<<" "<<r1.b<<endl;

    Rectangle r2(3,4);   // parameterised constructor

    cout<<r2.l<<" "<<r2.b<<endl ;

    Rectangle r3 = r2 ;   // copy constructor 

    cout<<r3.l<<" "<<r3.b<<endl ;   

    return 0 ;

}