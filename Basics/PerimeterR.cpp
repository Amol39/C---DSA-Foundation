#include<iostream>
using namespace std ;
int main(){
    float width, length, perimeter;
	cout<<"Enter width "<<endl;
    cin>> width;
    cout<<"Enter Length"<< endl ;
    cin>>length;
    perimeter = 2 * (width + length);
    cout<<"Perimeter of rectangle is "<<perimeter ;
    return 0 ;
}