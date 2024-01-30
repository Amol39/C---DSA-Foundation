#include<iostream>
using namespace std ;


// What is runtime polymorphism :
//                                A base class pointer pointing to derived class object and overrided function is called then the function of derived that is based on the object it will be called if the base class function is declared as virtual this is nothing but Runtime polymorphism.


// when you assign virtual function is 0 the its called pure virtual function.

// when a class contain all pure virtual function then it's called abstract class.

// if your class is abtract then you cannot create an object of that class , you can create on pointer of that class.

class BasicCar
{
public:
    virtual void Start()
    {
        cout<<"Basic car started "<<endl;
    }
};

class AdvanceCar: public BasicCar
{
    public:
    void Start()
    {
        cout<<"Advance Car Start"<<endl;
    }
};


int main()
{
    // AdvanceCar a;
    // BasicCar *ptr = &a;
    // ptr->Start();

    BasicCar *ptr = new AdvanceCar();
    ptr->Start();

}