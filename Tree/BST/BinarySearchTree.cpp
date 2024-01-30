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

// void insertBST(Node* &root , int val){

//     Node* newNode = new Node(val);
//     if(root==NULL){
//         root = newNode;
//         return;
//     }

//     Node* current = root;
//     while(true){
//         if(current->value > val){
//             if(current->left ==NULL){
//                 current->left = newNode;
//                 return;
//             }
//             current = current->left;
//         }else{
//             if(current->right==NULL){
//                 current->right = newNode;
//                 return;
//             }
//             current = current->right;
//         }
//     }

// }

Node* insertBSTRecursive(Node* &root , int val){
    // base case
    if(root==NULL){
        Node* newNode = new Node(val);
        return newNode;
    }
    // recursive case 

    if(root->value > val){
        root->left = insertBSTRecursive(root->left , val);
    }
    else if(root->value <  val){
        root->right = insertBSTRecursive(root->right , val);
    }
    return root;
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

    // insertBST(bst1.root, 3);
    // insertBST(bst1.root, 1);
    // insertBST(bst1.root, 4);
    // insertBST(bst1.root, 6);
    // insertBST(bst1.root, 2);

    bst1.root = insertBSTRecursive(bst1.root,3);
    insertBSTRecursive(bst1.root,1);
    insertBSTRecursive(bst1.root,4);
    insertBSTRecursive(bst1.root,6);
    insertBSTRecursive(bst1.root,2);

    inorderTraversal(bst1.root);
    return 0;
}