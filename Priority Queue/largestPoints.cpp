/*
Given an array of n integers. You are supposed to perform k operations on it. At each operation, the smallest 2 elements of the array are removed from the array, multiplied by each return the largest element of the array after the k operations. it is guaranteed that at least one element will remain after the k operations.

input 
n = 5 , k = 3
Array = {2 4 3 1 5}

output = 20 ;
*/

#include<iostream>
#include<queue>
#include<vector>

using namespace std; 

int largestPoints(vector<int>arr , int n , int k){
    priority_queue<int , vector<int> , greater<int>> pq ; // min heap;
    for(auto i : arr){
        pq.push(i);
    }

    while(k--){
        int firstElement = pq.top();
        pq.pop();
        int secondElement = pq.top();
        pq.pop();
        int product = firstElement * secondElement;
        pq.push(product);
    }

    // find largest element 
    while(pq.size()>1){
        pq.pop();
    }
    return pq.top();
}

int main(){
    int n , k;
    cin >> n >>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }

    cout<<largestPoints(arr,n,k)<<endl;
    return 0;
}