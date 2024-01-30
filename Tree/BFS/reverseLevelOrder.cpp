// Given a binary tree, print the level order in reverse manner, i.e print the last row first and then the rows below.

#include<iostream>
#include<vector>
#include<queue>
#include<stack>

using namespace std;

class Node{
    public:
    int value;
    Node* left;
    Node* right;

    Node(int v){
        value = v;
        left = right = NULL;
    }
};

vector<int> reverseLevelOrderTraversal(Node* root){
    vector<int>ans;
    if(root==NULL){
        return ans;
    }
    queue<Node*> q;
    stack<Node*> st;

    q.push(root);

    while(!q.empty()){
        int nodesAtCurrentLevel = q.size();

        while(nodesAtCurrentLevel){
            Node* currentNode = q.front();
            q.pop();
            st.push(currentNode);

            if(currentNode->right!=NULL){
                q.push(currentNode->right);
            }

            if(currentNode->left!=NULL){
                q.push(currentNode->left);
            }
            nodesAtCurrentLevel--;
        }
    }
    while(!st.empty()){
        ans.push_back(st.top()->value);
        st.pop();
    }
    return ans;
}
int main(){

    Node* rootNode = new Node(2);
    rootNode->left = new Node(4);
    rootNode->right = new Node(10);
    rootNode->left->left = new Node(6);
    rootNode->left->right = new Node(5);
    rootNode->right->right = new Node(11);

    vector<int> ans = reverseLevelOrderTraversal(rootNode);

    for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}