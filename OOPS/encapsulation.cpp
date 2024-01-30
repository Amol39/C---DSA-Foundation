// binding of methods and variables together into a single unit which is called class
// data is only accessable from the class method or function 
// also leads to data absraction or hiding .  class -> Abstract data type(ADT)


#include<iostream>
using namespace std ;

class ABC{
    int x ;  // by default it is private 

    public:

    void set(int n ){  // we cannot set value outside the class directly to private member of class  
        x = n ;
    }
    int get(){
        return x;   // access only class members or methods or function 
    }

};

int main(){
    ABC a ;
    a.set(3);
    cout<<"Value of n is: "<<a.get()<<endl;

    return 0 ;
}