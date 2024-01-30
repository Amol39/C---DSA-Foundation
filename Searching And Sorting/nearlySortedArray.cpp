#include<iostream>
#include<vector>
using namespace std ;

void bubbleSort(vector<int> &arr){
    int n = arr.size();
    bool flag = false;
    for(int i =0 ; i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                flag = true ;
                swap(arr[j],arr[j+1]);
            }
        }
        if(!flag) break ;
    }
}

int main(){
    cout<<"Enter Size of vector: ";
    int n ;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubbleSort(arr);

    for(int i =0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}