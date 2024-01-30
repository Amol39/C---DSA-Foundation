#include<iostream>
#include<vector>
using namespace std ;

int binarySearch(vector<int>input,int target){
    // define search space 
    int low = 0 ;                        // define start of search space 
    int high = input.size()-1;          // end of search space 
    while(low<=high){                
        int mid = low +(high-low)/2;  // int mid = (low+high)/2;    // calculate mid point for search 
        if(input[mid]== target) return mid ;  
        else if(input[mid]<target){
            low = mid+1;          // discard the left of mid 
        }else{
            high = mid -1 ;       // discard the right of mid 
        }
    }
    return -1 ;
}
int main(){
    int n ;
    cout<<"Enter Size of a vector: ";
    cin>>n;
    vector<int> input;
    cout<<"Enter Elements of a vector: ";
    for(int i = 0; i<n;i++){
        int x ;
        cin>>x;
        input.push_back(x);
    }
    cout<<"Enter Target: ";
    int target;
    cin>>target;
    cout<<binarySearch(input,target)<<endl;
    
    return 0 ;

}

