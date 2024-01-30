// 3. Factorial Calculation:
// Implement a recursive function to calculate the factorial of a number.

#include<iostream>
using namespace std ;

int fact(int n ){
    int ans = 0 ;
    if(n==0){
        return 1;
    }
    ans = n*fact(n-1);
    return ans ;
}

int main(){
    int num ;
    cout<<"Enter Number: ";
    cin>>num;
    int ans = fact(num);

    cout<<"Factorial of number is : "<<ans<<endl;
    return 0 ;
}