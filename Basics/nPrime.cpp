#include<iostream>
using namespace std ;

int main(){
    int low , high ;
    cout<<"Enter Low: ";
    cin>>low;
    cout<<"Enter High: ";
    cin>>high;
    for(int i=low;i<=high;i++){
        int count =0;
        for(int div = 2;div*div<=i;div++){
            if(i%div==0){
                count++; 
                break;
            }
        }
        if(count ==0){
            cout<<i<<endl;
        }
    }

}