#include<iostream>
#include<vector>
using namespace std ;

int main(){
    vector<int> v(5);
    cout<<"Enter Elements: ";
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    cout<<"Enter Particular Elements: ";
    int element ;
    cin>>element;
    int occurances =0 ;
    for(int i=0;i<v.size();i++){
        if(v[i]==element){
            occurances++;
        }
    }
    cout<<"Total Occurances of Elements is: "<<occurances<<endl;
}