/*
Check Whether two strings are Isomorphic of each other. Return true if they are else return false. 
*/


/*
Time Complexity O(n) => sum of length of s1& s2.
Space Complexity O(n) => Unique Characters in S1 and S2.
*/
#include<iostream>
#include<unordered_map>

using namespace std;

bool checkNoOneToManyMapping(string s1,string s2){
    unordered_map<char,char> m;
    for(int i=0;i<s1.length();i++){
        if(m.find(s1[i]) !=m.end()){
            if(m[s1[i]]!=s2[i]){
                return false;
            }
        }
        else{
            m[s1[i]] = s2[i];
        }
    }
    return true;
}

bool isIsomorphic(string s1,string s2){

    if(s1.length()!=s2.length()){
        return false;
    }
    
    // checking one-to-many mapping from s1->s2
    bool s1s2Mapping = checkNoOneToManyMapping(s1,s2);
    // checking one-to-many mapping from s2->s1
    bool s2s1Mapping = checkNoOneToManyMapping(s2,s1);

    return s1s2Mapping && s2s1Mapping;
}

int main(){
    string s1,s2;
    cout<<"Enter Strings: "<<endl;
    cin>>s1>>s2;

    cout<<(isIsomorphic(s1,s2)?"IS Isomorphic":"Not Isomorphic")<<endl;

    return 0;
}