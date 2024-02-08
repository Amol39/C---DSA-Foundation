#include<iostream>
#include<queue>
#include<vector>
#include<unordered_map> // Added for unordered_map

using namespace std;

int leastInterval(vector<char> tasks, int cooldown) {

    // 1. count freq of tasks 
    unordered_map<char, int> taskFreq;
    for(auto t : tasks){ // Fixing typo
        taskFreq[t]++;
    }

    //2. insert freq into max heap 
    priority_queue<int> pq;
    for(auto e : taskFreq){
        pq.push(e.second);
    }

    //3. finding time untill pq is empty.
    int totalTime = 0;
    while(!pq.empty()){
        vector<int> temp;
        // looping one time frame = n+1 units of time
        for(int i=0; i<=cooldown; i++){ // Fixed syntax error
            if(!pq.empty()){
                int freq = pq.top();
                pq.pop();

                if(freq > 1){
                    temp.push_back(freq-1); // adding remaining tasks in temp vector
                }
            }
            totalTime++;

            if(pq.empty() && temp.empty()){
                return totalTime; // all task have been executed
            }
        }
        for(auto t : temp){
            pq.push(t); // adding back remaining tasks from temp vector to pq
        } 
    }
    return totalTime;
}

int main(){
    
    vector<char> tasks = {'A','A','A','B','B','B'};
    int cooldown = 2;
    int leastTime = leastInterval(tasks,cooldown);

    cout<<"Least number of units of time: "<<leastTime<<endl;

    return 0;
}
