#include<iostream>
#include<cmath>
using namespace std ;

int main(){
    int n , k;
    cout<<"Enter Number: ";
    cin>>n;
    cout<<"Enter number of rotation ";
    cin>>k;
    int nod =0 ;
    int num = n ;
    while(num!=0){
        num = num/10 ;
        nod++;
    }
    k = k%nod;
    if(k<0){
        k = k+nod ;
    }
   
    // int div = pow(10,k);    while pow use offline it gives floating value but we need integer 
    // int mul = pow(10,nod-k);  alternative for pow function we use for loop 

    int div = 1;
    for (int i = 0; i < k; i++) {
         div *= 10;
    }

    int mul = 1;
    for (int i = 0; i < nod - k; i++) {
         mul *= 10;
    }
    int q = (n/div);
    int r =(n%div);

    int ans =(r*mul)+q;
    cout<<ans<<endl;
    return 0 ;
}