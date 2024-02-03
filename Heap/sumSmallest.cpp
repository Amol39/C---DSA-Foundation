/*
Given an array A[] of N positive integers and two positive integers K1 and K2. Find the sum of all elements between K1th and K2th smallest elements of array. It may be assumed that(1 <= k1 < k2 <= n).
*/

#include<iostream>
using namespace std;

void heapify(int arr[], int size, int curr){
    while(2 * curr + 1 < size){
        int leftchild = 2 *curr +1;
        int rightchild = 2*curr +2;
        int minchild = leftchild;

        if(rightchild < size && arr[rightchild] < arr[minchild]){
            minchild = rightchild;
        }
        if(arr[minchild]>=arr[curr]){
            return;
        }
        swap(arr[minchild],arr[curr]);
        curr = minchild;
    }
}

int remove(int arr[], int size){
    
    int removedValue = arr[0];
    arr[0] = arr[size-1];
    size--;
    heapify(arr,size,0);
    return removedValue;
}

int sumOfSmallest(int arr[], int size, int k1, int k2){

    //1. create min heap
    for(int i = size/2-1; i>=0;i--){
        heapify(arr,size,i);
    }

    int sum = 0;
    int elements = k2-k1-1;

    //2. remove k1 elements

    while(k1--){
        remove(arr,size);
    }

    //3. calculate sum by removing elements 
    while(elements--){
        sum += remove(arr,size);
    } 

    return sum;
}

int main(){

    int N = 7;

    int arr[N] = {20,8,22,4,12,10,14};

    int size = 7;

    int k1 = 3;
    int k2 = 5;

    cout<<sumOfSmallest(arr,size,k1,k2)<<endl;

    return 0;
}