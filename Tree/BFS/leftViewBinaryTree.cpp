// Given the root of a binary tree, imagine yourself standing on the left side of it, return the values of the nodes you can see from the top to bottom.

#include<iostream>
#include<vector>
#include<queue>

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

vector<int>leftViewBinaryTree(Node* root){
    vector<int>ans;
    if(root==NULL){
        return ans;
    }
    queue<Node*>q;
    q.push(root);

    while(!q.empty()){
        int nodesAtCurrentLevel = q.size();

        Node* currentNode = q.front();
        ans.push_back(currentNode->value);

        while(nodesAtCurrentLevel){
            currentNode = q.front();
            q.pop();

            if(currentNode->left!=NULL){
                q.push(currentNode->left);
            }
            if(currentNode->right!=NULL){
                q.push(currentNode->right);
            }
            nodesAtCurrentLevel--;
        }
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

    vector<int> ans = leftViewBinaryTree(rootNode);

    for(auto i:ans){
        cout<<i<<" ";
    }cout<<endl;
    return 0;

}