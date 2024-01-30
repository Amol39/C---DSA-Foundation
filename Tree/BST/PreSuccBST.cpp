/*
Inorder predecessor and successor for a given key in BST
*/

#include<iostream>
using namespace std ;

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

void insertBST(Node* &root , int val){
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

void inorderPreSuccBST(Node* root , Node* &pre , Node* &succ , int key){
    if(root==NULL){
        return;
    }

    if(root->value==key){
        // pre-> rightmost node in left subtree
        if(root->left!=NULL){
            Node* temp = root->left;
            while(temp->right!=NULL){
                temp = temp->right;

            }
            pre = temp;
        }
        // succ-> leftmost node in right subtree
        if(root->right!=NULL){
            Node* temp = root->right;
            while(temp->left!=NULL){
                temp = temp->left;
            }
            succ = temp;
        }
        return;
    }
    if(root->value > key ){
        succ = root;
        inorderPreSuccBST(root->left, pre , succ , key);
    }else if(root->value < key){
        pre = root;
        inorderPreSuccBST(root->right, pre, succ, key);
    }
}

int main(){
    BST bst;
    insertBST(bst.root,3);
    insertBST(bst.root,1);
    insertBST(bst.root,4);
    insertBST(bst.root,6);
    insertBST(bst.root,2);

    inorderTraversal(bst.root);
    cout<<endl;
    Node* pre = NULL;
    Node* succ = NULL;
    
    inorderPreSuccBST(bst.root,pre,succ,6);

    if(pre!=NULL){
        cout<<"pre -"<<pre->value<<endl;
    }else{
        cout<<"pre - null";
    }

    if(succ!=NULL){
        cout<<"succ -"<<succ->value<<endl;
    }else{
        cout<<"succ - null";
    }
    return 0;
}