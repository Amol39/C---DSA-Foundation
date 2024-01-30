/*
Check whether the two strings are anagram of each other. Return true if they are else return false. an anagram of a string is another string that contains the same characters, only the order of character can be different. for example,"abcd" and "dabc" are an anagram of each other.

Input1: traingle
        integral
output1 : True

input2: anagram
        gram
output2: False

*/

/*
Time Complexity O(n)==> sum of length of s1 and s2 
Space Complexity O(n)==> Length of Any one String 
*/

#include<iostream>
#include<unordered_map>

using namespace std;

bool checkAnagram(string s1, string s2){
    if(s1.length()!=s2.length()){
        return false;
    }

    unordered_map<char,int> m;
    for(auto c1:s1){
        m[c1]++; // storing characters and their frequency of s1
    }

    for(auto c2:s2){
        if(m.find(c2)==m.end()){
            return false;
        }else{
            m[c2]--;
        }
    }

    for(auto ele:m){
        if(ele.second !=0){
            return false;
        }
    }

    return true;
}

int main(){
    string s1,s2;
    cout<<"Enter Strings: "<<endl;
    cin>>s1>>s2;

    cout<<(checkAnagram(s1,s2)?"Yes":"No")<<endl;
    return 0;
}

