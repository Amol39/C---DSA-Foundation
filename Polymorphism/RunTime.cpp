// Runtime polymorphism
#include<iostream>
using namespace std ;

class Base
{

public:
    virtual void Display()
    {
        cout<<"Display of base "<<endl;
    }

};

class Derived: public Base
{
public:
     void Display()
     {
        cout<<"Display of Derived"<<endl;
     }
};

int main()
{
    Derived d;
    Base *ptr =&d;

    ptr->Display();


}
