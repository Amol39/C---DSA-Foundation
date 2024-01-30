/*
You have given an integer n, representing the number of elements. then you will be given n elements. you have to return the sum of repetative elements i.e. the elements that appear more than one time.
*/

#include<iostream>
#include<map>
#include<vector>
using namespace std;

/*
time complexity O(n)
Space Complexity O(n).
*/ 

int main(){
    int n ;
    cout<<"Enter Size of an vector: ";
    cin>>n;
    vector<int> input(n);
    for(int i=0;i<n;i++){
        cin>>input[i];
    }

    map<int,int> m;
    for(int i=0;i<n;i++){
        // storing frequency of every element in input array
        m[input[i]]++;
    }

    int sum = 0;
    // finding sum of repatative elements
    // pair - element, frequency

    for(auto pair:m){
        if(pair.second>1){ // element is repatative
            sum+= pair.first;
        }
    } 
    cout<<"Ans - "<<sum <<endl;
    return 0;
}