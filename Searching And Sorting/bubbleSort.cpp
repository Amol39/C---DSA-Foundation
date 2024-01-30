#include<iostream>
#include<vector>
using namespace std;

// decending order sorted array

void bubbleSort(vector<int>&input){
    int n = input.size();
    for(int i = 0 ; i<n-1;i++){
        for(int j =0 ; j<n-i-1;j++){
            if(input[j]>input[j+1]){ // for printing decresing order you should change here
               swap(input[j],input[j+1]);                              //input[j]<input[j+1]            
            }     
        }
    }
}
int main(){
    cout<<"Enter size of vector: ";
    int n ;
    cin>>n;
    vector<int>input(n);
    cout<<"Enter Elements: ";
    for(int i=0;i<n;i++){
       cin>>input[i];
    }
    bubbleSort(input);

    for(int i=0;i<n;i++){
        cout<<input[i]<<" ";
    }
    cout<<endl;
}

