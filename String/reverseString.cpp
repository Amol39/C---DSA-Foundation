#include<iostream>
using namespace std ;

void reverse(string s ){
    int n = s.size();
    for(int i = n;i>=0;i--){
        cout<<s[i];
    }
}

int main(){
    string n ;
    cout<<"Enter String to be reversed: ";
    getline(cin,n);
    reverse(n);
    return 0 ;
}