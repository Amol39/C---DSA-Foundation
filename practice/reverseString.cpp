#include<iostream>
using namespace std ;

void reverse(string s){
    int n = s.size();
    for(int i=n;i>=0;i--){
        cout<<s[i];
    }
}

int main(){
    string s ;
    cout<<"Enter String: ";
    getline(cin,s);
    reverse(s);
    return 0 ;
}