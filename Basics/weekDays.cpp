#include<iostream>
using namespace std ;
int main(){

//Write a program to input week number(1-7) and print the corresponding day of week name using if else. Also try to solve this question using switch statement.

    int day;
    cout<<"Enter day number = ";
    cin>>day;

    // if(day==1)cout<<"sunday";
    // else if(day==2)cout<<"monday";
    // else if(day==3)cout<<"tuesday";
    // else if(day==4)cout<<"wednesday";
    // else if(day==5)cout<<"thursday";
    // else if(day==6)cout<<"friday";
    // else if(day==7)cout<<"saturday";
    // else cout<<"Enter valid number ";

    // switch case 
    
    switch(day){
        case 1 :cout<<"sunday";
        break;
        case 2 :cout<<"monday";
        break;
        case 3 :cout<<"tuesday";
        break;
        case 4 :cout<<"wednesday";
        break;
        case 5 :cout<<"thursday";
        break;
        case 6 :cout<<"friday";
        break;
        case 7 :cout<<"saturday";
        break ;
        default :cout<<"Enter valid number";
    }
    return 0 ;


}