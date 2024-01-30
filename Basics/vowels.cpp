#include<iostream>
using namespace std;
int main(){
    char c ;

   // Write a  program to check whether an alphabet is vowel or consonant using if else.

   cout<<"Enter Character "<<endl;
   cin>>c;
   if(c=='a'|| c=='e'|| c=='i'|| c =='o'|| c=='u' ){
    cout<<"Character is vowel";
   }else cout<<"Character is consonant";
   return 0 ;
}