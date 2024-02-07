/*
Given an integer array nums and an integer k, return the kth largest element in the array. Note that it is the kth largest element sorted order,not the kth distinct element.
*/

#include<iostream>
#include<vector>
#include<queue>
using namespace std;


int KthLargestElement(vector<int>arr,int size, int k){
    priority_queue <int,vector<int>,greater<int>> pq;  // create min heap

    for(int i=0;i<size;i++){
        pq.push(arr[i]);
        if(pq.size()>k){
            pq.pop();   // removing the smallest element out of k+1 elements 
        }
    }
    return pq.top();
}

int main(){
    /*
    int k = 3;
    vector<int>arr ={3,7,2,9,5};         Brute force approach TC(n log n)
    sort(arr.begin(),arr.end());
    
    cout<<arr[k-1]<<endl;

    */

    int size, k;
    cin>>size>> k;
    vector<int >arr(size);

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<KthLargestElement(arr,size,k);
    return 0;
}