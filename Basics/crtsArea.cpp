//Program to calculate combine Area(Circle,Rectangle,Triangle,Sqaure ) , Take value from user also Print output using single print statement.
#include<iostream>
using namespace std;
int main(){
    float radius , width , length ,hight,base,side;
        
    cout<<"Enter radius = ";
    cin>>radius;
    cout<<"Enter width = ";
    cin>>width;
    cout<<"Enter length = ";
    cin>>length;
    cout<<"Enter hight = ";
    cin>>hight;
    cout<<"Enter base = ";
    cin>> base ;
    cout<<"Enter side = ";
    cin>>side ;

    float AreaOfC=3.1425*radius*radius; // formula Area of circle = pi*r*r 

    float AreaOfR=width*length;       // formula  Area of Rectangle = w*l 

    float AreaOfT = (hight*base)/2 ;   // formula  Area of Traingle = h*b/2

    float AreaOfS = side*side ;      // formula Area of Square = side* side ;

    cout<<"Area of circle is "<<AreaOfC<<" Area of Rectangle is "<<AreaOfR<<" Area of traingle is "<<AreaOfT<<" Area of Square is "<<AreaOfS<<endl;

    return 0 ;
}