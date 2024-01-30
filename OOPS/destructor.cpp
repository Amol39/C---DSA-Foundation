#include<iostream>
using namespace std ;

// destructor is called when object is deleted 
// desctructor is automatically delete when program is completed
// cannot pass any parameter.

class rectangle{
    public: 

    int l ;
    int b;

    rectangle(){ // default constructor 
    l=0;
    b=0;
    }

    rectangle(int x , int y){ // parameterised constructor 
    l = x ;
    b = y ;

    }

    rectangle(rectangle& r){// copy constructor - initialise an object by another existing obj 
    l = r.l;
    b = r.b;
    }

    ~rectangle(){
        cout<<"Destructor is called "<<endl;
    }

};


int main(){
    rectangle *r1 = new rectangle() ;   // default constructor 
    cout<<r1->l<<" "<<r1->b<<endl;

    delete r1 ;  // use delete when you want to delete pointer variable 

    rectangle r2(3,4);   // parameterised constructor

    cout<<r2.l<<" "<<r2.b<<endl ;

    rectangle r3 = r2 ;   // copy constructor 

    cout<<r3.l<<" "<<r3.b<<endl ;   

    return 0 ;
}