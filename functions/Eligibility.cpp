// given the age of a person,write a function to check if the person is eligible to vote or not 

#include<iostream>
using namespace std ;

void eligible(int age){
    if(age>=18){
        cout<<"Eligible for vote";
    }else{
        cout<<"Not eligible for vote";
    }
}
int main(){
    cout<<"Enter age of person: ";
    int age ;
    cin>>age;
    eligible(age);
    return 0 ;
}