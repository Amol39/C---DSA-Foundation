#include<iostream>
using namespace std ;

class fruit{
    public:
    string name ;
    string color;

};

int main(){

    fruit f ;   //  creating object of class 
    f.name = "Mango";
    f.color = "Yellow";   // access object of a class using dot() operator  also only dot operator cannot overload

    cout<<f.name<<"-"<<f.color<<endl; 

    // another way to create object of class 

    fruit *obj = new fruit();  // its a pointer variable object of class 

    obj->name = "Apple";  // access pointer variable object using arrow symbol
    obj->color = "Red";
    
    cout<<obj->name<<"-"<<obj->color<<endl;

     
    return 0 ;
}