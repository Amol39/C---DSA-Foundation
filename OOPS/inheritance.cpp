#include<iostream>
using namespace std ;

class parent{
    public:  // data and fuctions of class can access anywhere in the code
    int x ;

    protected:  // accessible in own class , parent class and derived class
    int y ;

    private:  // they are accessible only in own class.
    int z ;

};


class child1: public parent{
    // x will remain public     
    // y will remain protected 
    // z will not be accessible 
};

class child2: private parent{
    // x will be private 
    // y will be private 
    // z will not be accessible
};

class child3: protected parent{
    // x will be protected 
    // y will be protected 
    // z will not be accessible 
};



int main(){
    parent p ;
    p.x ; // accessible anywhere in program 
    return 0 ;
}