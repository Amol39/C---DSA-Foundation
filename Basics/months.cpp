#include<iostream>
using namespace std ;
int main(){

    //Write a program to enter month number between(1-12) and print number of days in month using if else.  Also try to solve this question using switch statement.

    int month;
    cout<<"Enter month number = ";
    cin>>month;

    // if(month==1)cout<<"Jan";
    // else if(month==2)cout<<"Feb";
    // else if(month==3)cout<<"March";
    // else if(month==4)cout<<"Apr";
    // else if(month==5)cout<<"May";
    // else if(month==6)cout<<"Jun";
    // else if(month==7)cout<<"Jul";
    // else if(month==8)cout<<"Aug";
    // else if(month==9)cout<<"Sep";
    // else if(month==10)cout<<"Oct";
    // else if(month==11)cout<<"Nov";
    // else if(month==12)cout<<"Dec";
    // else cout<<"Enter valid month number ";

    switch(month){
        case 1:cout<<"Jan";
        break;
        case 2:cout<<"Feb";
        break;
        case 3:cout<<"Mar";
        break;
        case 4:cout<<"Apr";
        break;
        case 5:cout<<"May";
        break;
        case 6:cout<<"Jun";
        break;
        case 7:cout<<"Jul";
        break;
        case 8:cout<<"Aug";
        break;
        case 9:cout<<"Sep";
        break;
        case 10:cout<<"Oct";
        break;
        case 11:cout<<"Nov";
        break;
        case 12:cout<<"Dec";
        break;
        default : cout<<"Enter Valid month number ";
    }
    return 0 ;
}