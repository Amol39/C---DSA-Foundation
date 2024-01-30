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

class BST{
    public:
    Node* root;

    BST(){
        root = NULL;
    }
};

void InsertBST(Node* &root, int val){
    Node* newNode = new Node(val);
    if(root==NULL){
        root = newNode;
        return;
    }

    Node* current = root;
    while(true){
        if(current->value > val){
            if(current->left==NULL){
                current->left = newNode;
                return;
            }
            current = current->left;
        }else{
            if(current->right==NULL){
                current->right = newNode;
                return;
            }
            current = current->right;
        }
    }
}

bool searchBST(Node* root, int key){
    // base case
    if(root == NULL){
        return false;
    }

    if(root->value == key){
        return true;
    }

    // recursive case
    if(root->value < key){
        return searchBST(root->right , key);
    }
    
    if(root->value > key){
        return searchBST(root->left , key);
    }
}

void inorderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    inorderTraversal(root->left);
    cout<<root->value<<" ";
    inorderTraversal(root->right);
}

int main(){
    BST bst1;
    InsertBST(bst1.root,3);
    InsertBST(bst1.root,1);
    InsertBST(bst1.root,4);
    InsertBST(bst1.root,6);
    InsertBST(bst1.root,2);

    inorderTraversal(bst1.root);

    cout<<endl;
    cout<<searchBST(bst1.root,4)<<endl;
    return 0;
}