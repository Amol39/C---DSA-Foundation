#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    char data;
    vector<Node*>children;

    Node(char data){
        this->data = data;
    }
};

void inorderTraversal(Node* root){
    if(root==NULL){
        return;
    }

    int childnodes = root->children.size();
    for(int i=0;i<childnodes-1;i++){
        inorderTraversal(root->children[i]);
    }
    cout<<root->data<<" ";
    if(childnodes>0){
        inorderTraversal(root->children[childnodes-1]);
    }
    return;
}

int main(){
    Node* root = new Node('A');
    root->children.push_back(new Node('B'));
    root->children.push_back(new Node('C'));
    root->children.push_back(new Node('D'));

    root->children[0]->children.push_back(new Node('E'));
    root->children[0]->children.push_back(new Node('F'));
    root->children[2]->children.push_back(new Node('G'));

    inorderTraversal(root);
    return 0;
}