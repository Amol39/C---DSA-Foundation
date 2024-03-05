/*
There is one meeting roon in a firm. There are N meetings in the form of (s[i],f[i]) where s[i] is the start time of meeting i and f[i] is the finish time of meeting i. The task is to find the maximum number of meetings that can be accommodated in the meeting room. Print all meeting numbers.

input :- 
s[i] = {1,3,0,5,8,5}
f[i] = {2,4,6,7,9,9}

output : 1 2 4 5   // meeting numbers
*/

/*
solution :- Greedy algorithm
time complexity : - O(nlogn)
space complexity :- same for sorting 
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct meeting{
    int start;
    int end;
    int idex;
};

bool cmp(meeting m1, meeting m2){
    return m1.end < m2.end;
}

void print_maximum_meeting(vector<meeting>& arr){
    sort(arr.begin(),arr.end(),cmp);
    cout<<arr[0].idex<<" ";
    meeting last = arr[0];
    for(int i=1;i<arr.size();i++){
        if(arr[i].start > last.end){
            cout<<arr[i].idex<<" ";
            last = arr[i];
        }
    }
}

int main(){

    int n;
    cin>>n;
    vector<meeting>arr;
    int i = 0;
    while(n--){
        int s, e;
        cin>>s>>e;
        i++;
        meeting m;
        m.start = s;
        m.end = e;
        m.idex = i;
        arr.push_back(m);
    }
    print_maximum_meeting(arr);
    return 0;
}