#include<iostream>
#include<vector>
using namespace std ;

// Q1.  Given an integer array arr, move all 0's to the end of it while maintaining the relative order of the non-zero elements.Note that you must do this in-place without making a copy of the array
/*
input :- 3 0 2 0 1 5 output :- 3 2 1 5 0 0 
*/
void relativeNonZeroSorting(vector<int>&v){
    /*
    time complexity :- O(n^2)
    space complexity :- O(1)
    */
    int n = v.size();
    for(int i = n-1 ; i>=0;i--){
        int j = 0 ;
        bool flag = false;
        while(j!=i){
            if(v[j]==0 && v[j+1]!=0){
                swap(v[j],v[j+1]);
                flag = true; 
            }
            j++;
        }
        if(flag==false) break;
    }
}

int main(){
    int n ;
    cout<<"Enter size of vector: ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter Elements in vector: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    relativeNonZeroSorting(v);
    for(int i =0 ;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0 ;
}
