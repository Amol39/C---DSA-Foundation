#include <iostream>
using namespace std ;
int main(){

    float Base_Salary, percentage_Allowances, percentage_Deductions , Net_Salary ;
    
    cout<<"Enter the basic salary : " ;
    cin>>Base_Salary;
    cout<<"Enter percentage of allowances :";
    cin>>percentage_Allowances;
    cout<<"Enter percentage of dedictions :";
    cin>>percentage_Deductions;

    Net_Salary =Base_Salary+Base_Salary*percentage_Allowances/100-Base_Salary*percentage_Deductions/100;

    cout<<"Net Salary is "<<Net_Salary;

    return 0 ;
}