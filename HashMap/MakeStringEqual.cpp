#include<iostream>
#include<vector>
#include<unordered_map>

/*
Given an array of strings, you can move any number of characters from one string to any other string any number of times. you just have to make all of them equal. print "Yes" if you can make every string in the array equal by using any number of operations otherwise print "No".

Input 1 :["Collegeee","Coll","Collegge"]
Output: Yes

Input 2 :["Wall","Ah","Wallahah"]
Output : No
*/


/*
Time Complexity O(n) ==> no.of all characters
Space Complexity O(m) ==> no.of unique characters.
*/

using namespace std ;

bool makeStringEqual(vector<string> &v){

    unordered_map<char,int> m;

    for(auto str:v){
        for(char c:str){
            m[c]++;
        }
    }

    int n = v.size();
    for(auto ele:m){
        if(ele.second%n!=0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout<<"How many number of string you want to Enter: ";
    cin>>n;

    vector<string>v(n);

    cout<<"Enter strings:"<<endl;
    for(int i= 0; i<n;i++){
        cin>>v[i];
    }

    cout<<(makeStringEqual(v)?"Yes":"No")<<endl;
    return 0;
}