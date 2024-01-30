#include<iostream>
using namespace std ;

int digit(int x,int y){
    int count = 0 ;
    while(x!=0){
    int dig = x%10;
    x = x/10;
    if(dig==y){
        count++;
    }
  } return count ;
   
}
int main(){
    cout<<"Enter Number: ";
    int n ;
    cin>>n;
    cout<<"Enter Number Which you want to check how many times its present: ";
    int d ;
    cin>>d;
    cout<<digit(n,d)<<endl;
    return 0 ; 

}