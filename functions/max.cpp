#include <iostream >
using namespace std ;

int max(int x,int y, int z){
    if(x>y && x>z){
        return x;
    }else if(y>x && y>z ){
        return y;
    }else 
        return z;
}

int main()
{
    int a , b , c ;
    cout<<"Enter the values of a , b and c = ";
    cin>>a>>b>>c;
    cout<<"greatest number is "<<max(a,b,c);

}