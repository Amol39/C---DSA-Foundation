#include<iostream>
using namespace std ;

int main(){
    int t , n ;
    cout<<"How many numbers you want to enter ";
    cin>>t;
    cout<<"Enter Numbers ";
    
    for(int i=0;i<t;i++){
        cin>>n;
        int count = 0;
        for(int div=2;div*div<=n;div++){
            if(n%div==0){
                count++;
                break;
            }
        }
        if(count==0){
            cout<<"Prime"<<endl;
        }else {
            cout<<"Not Prime "<<endl;
        }
    }

    return 0 ;
}
