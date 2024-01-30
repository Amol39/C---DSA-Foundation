
// find square root of a non negative number in given range 

#include<iostream>
using namespace std ;

int sqrt_binarySearch(int x ){
    
    /* time O(log n)
       space O(1)
    */

    int ans = -1;
    int low=1; int high = x;
    while(low<=high){
    int mid = low+(high-low)/2;
    if(mid*mid<=x){
        ans = mid;
        low = mid+1;
    }else{
        high = mid-1;
    }
}
return ans ;
}
int main(){
    cout<<"Enter Number: ";
    int n ;
    cin>>n;
    cout<<"Square root of given number is: "<<sqrt_binarySearch(n)<<endl;
}