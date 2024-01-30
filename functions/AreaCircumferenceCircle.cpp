// write a function to calculate area and circumference of circle 

#include<iostream>
using namespace std ;

int area(float radius){
    float pie =3.1415;
    float Area = pie * (radius*radius);
    return Area; 
}

int circumference(float radius){
    float pie = 3.1415;
    float Circumference = 2 * pie *(radius * radius);
    return Circumference;
}
int main(){
    cout<<"Enter radius of a circle: ";
    int r ;
    cin>>r;
    cout<<"Area of circle is: "<<area(r)<<endl;
    cout<<"Circumference of a circle is : "<<circumference(r);

}