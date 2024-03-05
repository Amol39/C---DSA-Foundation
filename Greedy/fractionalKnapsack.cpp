/*
Given the weights and profits of N items, in the form of {profit,weight} put these items in a knapsack of capacity W to get the maximum total profit in the knapsack. In fractional knapsack, we can break items for maximizing the total value of the knapsack.

input  arr[]= {{60,10},{100,20},{120,30}}, W = 50
output : 240

Explanation : By taking items of weight 10 and 20 kg and 2/3 of 30 kg.
Hence total price will be 60+100+(2/3)(120) = 240
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

struct Item{
    int  value;
    int weight;
};

bool cmp(Item i1, Item i2){
    double v_w_i1 = static_cast<double>(i1.value)/i1.weight;
    double v_w_i2 = static_cast<double>(i2.value)/i2.weight;
    return v_w_i1>v_w_i2;
}

double  fractional(int W, vector<Item>& items){
    double ans = 0;
    sort(items.begin(),items.end(),cmp);
    for(const auto item:items){
        if(item.weight <=W){
            ans += item.value;
            W -= item.weight;
        }else{
            double fraction = static_cast<double>(W)/item.weight;
            ans += fraction * item.value;
            W = 0;
        }
    }
    return ans;
}

int main(){
    int n, W;
    cin>> n >> W;
    vector<Item> items;
    for(int i=0;i<n;i++){
        int v,w;
        cin>>v>>w;
        Item it;
        it.value = v;
        it.weight = w;
        items.push_back(it);
    }

    cout<<fractional(W, items)<<"\n";
    return 0;
}