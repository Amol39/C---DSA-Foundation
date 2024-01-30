#include<iostream>
#include<vector>
#include<queue>
#include<map>

using namespace std;

class Node {
public:
    int value;
    Node* left;
    Node* right;

    Node(int v) {
        value = v;
        left = right = NULL;
    }
};

vector<int> bottomViewBinaryTree(Node* root) {
    vector<int> ans;
    if (root == NULL) {
        return ans;
    }

    queue<pair<Node*, int>> q;
    map<int, int> m;

    q.push(make_pair(root, 0));

    while (!q.empty()) {
        int nodesAtCurrentLevel = q.size();

        while (nodesAtCurrentLevel) {
            pair<Node*, int> p = q.front();
            Node* currentNode = p.first;
            int currentColumn = p.second;
            q.pop();

            // Update the map with the latest value for the current column
            m[currentColumn] = currentNode->value;

            if (currentNode->left != NULL) {
                q.push(make_pair(currentNode->left, currentColumn - 1));
            }

            if (currentNode->right != NULL) {
                q.push(make_pair(currentNode->right, currentColumn + 1));
            }
            nodesAtCurrentLevel--;
        }
    }

    for (auto it : m) {
        ans.push_back(it.second);
    }
    return ans;
}

int main() {
    Node* rootNode = new Node(2);
    rootNode->left = new Node(4);
    rootNode->right = new Node(10);
    rootNode->left->left = new Node(6);
    rootNode->left->right = new Node(5);
    rootNode->right->right = new Node(11);

    vector<int> ans = bottomViewBinaryTree(rootNode);

    for (auto i : ans) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
