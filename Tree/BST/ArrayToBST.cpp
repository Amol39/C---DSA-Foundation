// sorted array to balanced binary search tree.

/*
Given a sorted array. create a balanaced binary search tree out of it. a balanaced BST is height-balanaced i.e. the difference between height of the left subtree and right subtree is not more than 1.
you need to print the preorder traversal of the BST created.
*/


#include<iostream>
#include<vector>
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

class BST{
    public:
    Node* root;

    BST(){
        root = NULL;
    }
};

Node* sortedArrayToBST(vector<int> v, int start , int end){
    // base case
     
    if(start>end){
        return NULL;
    }
    
    int mid = (start+end)/2;
    Node* root = new Node(v[mid]);
    // recursive case
    root->left = sortedArrayToBST(v,start,mid-1);//recursively creating left subtree from left half of array
    root->right = sortedArrayToBST(v,mid+1,end);//recursively creating left subtree from left half of array
    return root;

}

void preorderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->value<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

int main(){
    int n ;
    cin>>n;

    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

     BST bst;
     bst.root = sortedArrayToBST(v,0,n-1);

     preorderTraversal(bst.root);

    return 0;
}