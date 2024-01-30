#include<iostream>
#include<math.h>
using namespace std ;

int inverse(int n ){
    int ans = 0;
    int place = 1; // position
    while(n!=0){
        int rem = n%10;
        n = n / 10;
        ans = ans+place*pow(10,rem-1);
        place++;
    }
     return ans ;
}

int main(){
    cout<<"Enter Number: ";
    int n ;
    cin>>n;
    int ans = inverse(n);\
    cout<<"inverse of "<<n<<" is "<<ans;
    return 0 ;
}