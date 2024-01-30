// write a program to remove occurance of a in string 

#include<iostream>
using namespace std ;

string removeoccurance(string &input,int idx , int n,char ch){
    if(idx ==n){
        return "";
    }
    string curr = "";
    curr += input[idx];
    return ((input[idx]==ch)?"" : curr) + removeoccurance(input,idx+1,n,ch);
}

int main(){
    string input;
    cout<<"Enter String: ";
    getline(cin,input);   // allowing spaces in string 
    cout<<"Enter Character to remove: ";
    int n = input.size();
    char ch ;
    cin>>ch;
    cout<<removeoccurance(input,0,n,ch);
    return 0 ;
}

// iterative solution
 
    // string result ;
    // for(char ch:input){
    //    if(ch!=ToRemove){
    //     result = result + ch;
    //    }
    // }
    // cout<<result ;
   