//Given a binary search tree(BST) and two values. you need to find the LCA i.e. Lowest Common ancestor of the two nodes provided both the nodes exist in the BST

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
        if(curr->value > val ){
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
            curr = curr->right;
        }
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

Node* lowestCommonAncestor(Node* root, Node* node1, Node* node2){
    // base case
    if(root==NULL){
        return NULL;
    }

    // recursive case

    if(root->value > node1->value && root->value > node2->value){
        // ancestor lies in the left subtree;
        return lowestCommonAncestor(root->left,node1,node2);
    }
    if(root->value < node1->value && root->value < node2->value){
        // ancestor lies in the right subtree
        return lowestCommonAncestor(root->right,node1,node2);
    }

    // if ancestor lies between node1 && node2 
    // if root->value is equal to node value

    return root;
}

int main(){
    BST bst;
    insertBST(bst.root,3);
    insertBST(bst.root,1);
    insertBST(bst.root,4);
    insertBST(bst.root,6);
    insertBST(bst.root,2);

    //inorderTraversal(bst.root);

    Node * node1 = new Node(2);
    Node * node2 = new Node(4);
    Node* temp =  lowestCommonAncestor(bst.root,node1,node2);
    cout<<temp->value<<endl;
    return 0;
}