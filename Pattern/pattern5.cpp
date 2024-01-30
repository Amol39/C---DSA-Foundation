#include<iostream>
using namespace std ;

int main(){
    int n ;
    cout<<"Enter Number: ";
    cin>>n ;

    // int sp = n/2;
    // int st = 1;
    // for(int i =1 ; i<=n;i++){

    //     for(int j = 1;j<=sp;j++){
    //         cout<<" ";
    //     }

    //     for(int j = 1 ; j<=st;j++){
    //         cout<<"*";
    //     }
    //     if(i<=n/2){
    //         sp--;
    //         st+=2;
    //     }else {
    //         sp++;
    //         st-=2;
    //     }
    //     cout<<endl;

    
    // Another approch for diamand pattern 
    // upper half 

    // for(int i = 1;i<=n;i++){

    //     // for space 
    //     for(int j = 1 ; j<=n-i;j++){
    //         cout<<" ";
    //     }
    //     //  for star 
    //     for(int j = 1 ; j<= 2*i-1;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // // lower half 
    // for(int i = n;i>=1;i--){

    //     // for space 
    //     for(int j = 1 ; j<=n-i;j++){
    //         cout<<" ";
    //     }
    //     //  for star 
    //     for(int j = 1 ; j<= 2*i-1;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;



        // One More Approach

        int spaces = n/2;
        int stars = 1;

        for(int i =1;i<=n;i++){
            for(int j=1;j<=spaces;j++){
                cout<<"\t";
            }
            for(int j=1;j<=stars;j++){
                cout<<"*\t";
            }
            cout<<endl;
            if(i<=n/2){
                spaces--;
                stars += 2;
            }else{
                spaces++;
                stars -= 2;
            }
      

    }


}