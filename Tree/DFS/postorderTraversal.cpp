#include<iostream>
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

void postorderTraversal(Node* rootNode){
    // base case
    if(rootNode==NULL){
        return; 
    }
    postorderTraversal(rootNode->left);
    postorderTraversal(rootNode->right);
    cout<<rootNode->value<<" ";
}
int main(){
    Node* rootNode = new Node(2);
    rootNode->left = new Node(4);
    rootNode->right = new Node(10);
    rootNode->left->left = new Node(6);
    rootNode->left->right = new Node(5);
    rootNode->right->right = new Node(11);

    postorderTraversal(rootNode);
    return 0;
}