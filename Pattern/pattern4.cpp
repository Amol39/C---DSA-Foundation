#include<iostream>
using namespace std;

int main(){
    cout << "Enter Number: ";
    int n;
    cin >> n;

    // for(int i = 1; i <= n; i++){
    //     // inner loop for space
    //     for(int j = 1; j <= i - 1; j++){
    //         cout << " ";
    //     }

    //     // inner loop for star
    //     for(int j = 1; j <= n - i + 1; j++){
    //         cout << "*";
    //     }
        
    //     cout << endl;
    
    


    // Another Approach 

    int spaces = 0;
    int stars = n ;
    
    for(int i =1 ; i<=n; i++){

        for(int j = 1 ; j<=spaces;j++){
            cout<<"\t";
        }

        for(int j = 1;j<=stars;j++){
            cout<<"*\t";
        }
        cout<<endl;
        spaces++;
        stars--;

    }
}
