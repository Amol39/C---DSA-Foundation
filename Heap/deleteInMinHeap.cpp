#include<iostream>
using namespace std ;

int const N = 1e3;

void deleteMinHeap(int minHeap[], int& size){
    minHeap[1] = minHeap[size];
    size--;
    int curr = 1;

    while(2*curr <= size){
        // looping till curr node has child nodes

        int leftchild = 2*curr;
        int rightchild = 2*curr + 1;
        int minchild = leftchild;

        if(rightchild <= size && minHeap[rightchild] < minHeap[leftchild]){
            minchild = rightchild;
        }

        if(minHeap[minchild] >=minHeap[curr]){
            return;
        }
        swap(minHeap[minchild],minHeap[curr]);
        curr = minchild;
    }
}

int main(){

    int minHeap[N]={-1,5,10,20,30,40,50};
    int size = 6;

    deleteMinHeap(minHeap,size);

    for(int i=1;i<=size;i++){
        cout<<minHeap[i]<<" ";
    }cout<<endl;

    return 0;
}