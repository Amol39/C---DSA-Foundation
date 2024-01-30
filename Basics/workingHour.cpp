#include <iostream>
using namespace std ;
int main(){
    //Write condition to check is given time is Working hours or not.condition if hour is from 9 to 18 its working hours otherwise leisure
    int hour;
    cout<<"Enter hour = ";
    cin>>hour;
    if(hour>=9 && hour<=18){
        cout<<"Working hour ";
    }else{
        cout<<"leisure";
    }
    return 0 ;

}