#include<iostream>
using namespace std ;
int main(){

    //Write a  program to input a character from user and check whether the given character is alphabet or not, using if else.

    char c ;
    cout<<"Enter Character = ";
    cin>>c;
    if((c>='a' && c<='z')|| (c>='A' && c<='Z'))
    {
        cout<<"Character is alphabet";
    }else{
        cout<<"Character is not alphabet ";
    }
    return 0 ;
    
}