#include<iostream>
using namespace std ;
int main(){
    char ch ;

    //Write a  program to input character from user and check whether character is uppercase or lowercase alphabet using if else.

    cout<<"Enter Character "<<endl;
    cin>>ch;
    if(ch>='a'&&ch<='z'){
        cout<<"character is lowercase ";
    }else if(ch>='A'&& ch<='Z'){
        cout<<"character is uppercase ";
    }else {
        cout<<"Enter valid character ";
    }
    return 0;
}