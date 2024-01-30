#include<iostream>
using namespace std ;

void firstAndlast(string s , char ch , int *first , int *last){
    for(int i = 0 ; i<s.size();i++){
        if(s[i]==ch){
            *first = i ;
            break ;
        }
    }
    for(int j = s.size()-1;j>=0;j--){
        if(s[j]==ch){
            *last = j ;
            break ;
        }
    }
}

int main(){
    string s;
    char ch ;
    cout<<"Enter a string : ";
    getline(cin,s) ;
    cout<<"Enter a character for find first and last occurance of that character: ";
    cin>>ch;

    int first;
    int last;

    int *pf = & first ;
    int *pl = & last ;

    firstAndlast(s,ch,pf,pl);

    cout<<first<<" "<<last<<endl;

}