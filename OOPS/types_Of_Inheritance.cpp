#include<iostream>
using namespace std ;

class parent{                           
    public:
    parent(){
        cout<<"Parent class"<<endl;
    }

};

class child: public parent{      // single inheritance 
    public: 
    child(){
        cout<<"Child class"<<endl;
    }
};

class grandChild:public child{                    // multilevel inheritance 
    public:
    grandChild(){
        cout<<"GrandChild Class"<<endl;
    }
};

class parent1{
    public:
    parent1(){
        cout<<"Parent1 class: "<<endl;
    }
};
class parent2{
    public:
    parent2(){
        cout<<"Parent2 class "<<endl;
    }
};

class child1: public parent1, public parent2{   // multiple inheritance 
    public:
    child1(){
        cout<<"Child1 class: "<<endl;
    }
};


class child2:public parent1{      // heirarchical inheritance 
    public:
    child2(){
        cout<<"Child2 class "<<endl;
    }
};

class child3:public parent1{
    public:
    child3(){
        cout<<"Child3 class"<<endl;
    }
};


// hybrid inheritance --> combination of more than one type of inheritance 

int main(){

    //grandChild c ;

    //child1 c1 ;

    child2 c2 ;
    child3 c3 ;
    return 0 ;
}