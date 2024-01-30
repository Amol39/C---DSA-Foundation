#include<iostream>
using namespace std;
int main(){
    
    // program to check if a person is eligible for voting 

    int age ;
    cout<<"Enter age of person = ";
    cin>>age;
    // if(age>18){
    //     cout<<"Person is eligible for voting";
    // }else cout<<"Person is not eligible for voting";

    //check age of a person 
    if(age>18){
        cout<<"Adult";
    }else cout<<"Not Adult";

}