/* Remove all leaf nodes from BST
Input :- The input to the program is the number of nodes in the BST,followed by the node value.
Output:- The program outputs the preorder traversal of the BST before and after removing the leaf nodes.
*/

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

void insertBST(Node* &root, int val){
    Node* newNode = new Node(val);
    if(root==NULL){
        root = newNode;
        return;
    }

    Node* curr = root;
    while(true){
        if(curr->value > val){
            if(curr->left==NULL){
                curr->left = newNode;
                return;
            }
            curr = curr->left;
        }else{
            if(curr->right==NULL){
                curr->right = newNode;
                return;
            }
            curr =curr->right;
        }
    }
}

void preorderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->value<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

Node* removeLeafNodes(Node* root){
    // base case
    if(root==NULL){
        return NULL;
    }
    if(root->left ==NULL && root->right==NULL){
        return NULL; // when root is leaf node.
    }

    // recursive case
    root->left = removeLeafNodes(root->left);
    root->right = removeLeafNodes(root->right);
    return root;
}
int main(){
    BST bst;
    insertBST(bst.root,3);
    insertBST(bst.root,1);
    insertBST(bst.root,4);
    insertBST(bst.root,6);
    insertBST(bst.root,2);

    preorderTraversal(bst.root);
    cout<<endl;
    bst.root = removeLeafNodes(bst.root);
    preorderTraversal(bst.root);
    return 0;
}