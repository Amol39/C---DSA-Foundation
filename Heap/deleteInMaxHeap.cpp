#include<iostream>
using namespace std ;

int const N = 1e3;

void deletMaxHeap(int maxHeap[],int &size){
    maxHeap[1] = maxHeap[size];
    size--;
    int curr = 1;

    while(curr<=size){
        int leftchild = 2*curr;
        int rightchild = 2*curr +1 ;
        int maxchild = leftchild;

        if(rightchild <= size && maxHeap[rightchild] > maxHeap[leftchild]){
            maxchild = rightchild;
        }
        if(maxHeap[maxchild]<= maxHeap[curr]){
            return;
        }
        swap(maxHeap[maxchild],maxHeap[curr]);
        curr = maxchild;
    }

}

int main(){
    int maxHeap[N] = {-1,90,80,70,20,10,50,60};
    int size = 7;

    deletMaxHeap(maxHeap,size);

    for(int i=0;i<=size;i++){
        cout<<maxHeap[i]<<" ";
    }cout<<endl;

    return 0;
}