#include<iostream>
using namespace std ;

void swap(int *x , int *y){
    int temp = *x;
    *x = *y ;
    *y = temp ;
}

int main(){
    int x , y ;
    cout<<"Enter Values of X and Y "<<endl;
    cin>>x>>y;

    int *p1 = &x;
    int *p2 = &y;

    swap(p1,p2);
    cout<<"after swap values of X and Y are: "<<x<<" "<<y<<endl;
    return 0 ;
}