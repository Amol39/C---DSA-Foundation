#include<iostream>
using namespace std ;
int main(){
    char C ;

   // Write a program to input a character from user and check whether given character is alphabet, digit or special character using if else.

   cout<<"Enter Character "<<endl;
   cin>>C;
   if((C>='a'&& C<='z')|| (C>='A'&&C<='Z')){
    cout<<"Given Input is character ";
   }else if(C>='0'&&C<='9'){
    cout<<"Given Input is Digit ";
   }else {
    cout <<"Given input is special character ";
   }
   return 0 ;

}