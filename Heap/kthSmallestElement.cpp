/*
Given an array arr[] and an integer k where k is smaller than size of array. the task is to find the Kth smallest element in the given array. It is given that all array element are distinct
*/


#include<iostream>
#include<algorithm>
using namespace std;
int const N = 1e3;

void heapify(int arr[],int size, int curr){
    while(2 * curr + 1 < size){
        int leftchild = 2*curr+1;
        int rightchild = 2*curr+2;
        int minchild = leftchild;

        if(rightchild < size && arr[rightchild]< arr[leftchild]){
            minchild = rightchild;
        }
        if(arr[minchild]>=arr[curr]){
            return;
        }
        swap(arr[curr],arr[minchild]);
        curr = minchild;
    }
}

void remove(int arr[],int &size){
    arr[0] = arr[size-1];
    size--;
    heapify(arr,size,0);
}

int kthSmallestElement(int arr[],int size, int k){
    
    // 1. create min heap
    for(int i = size/2-1;i>=0;i--){
        heapify(arr,size,i);
    }

    // 2. remove k-1 elements
    k-=1;
    while(k--){
        remove(arr,size);
    }

    return arr[0];


}

int main(){

    /* brute force solution

    int arr[N] ={30,23,12,39,31};
    int k = 3;
    
    sort(arr,arr+5);
    cout<<arr[k-1];

    */

    int arr[N] ={60,10,80,50,5,20,70};
    int size = 7;
    int k = 7;

    cout<<kthSmallestElement(arr,size,k)<<endl;

    return 0;
}