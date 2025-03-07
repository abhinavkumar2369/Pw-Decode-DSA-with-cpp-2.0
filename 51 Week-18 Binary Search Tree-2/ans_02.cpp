#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int x) : data(x), left(nullptr), right(nullptr) {}
};

Node* findLCA(Node* root, int n1, int n2) {
    if (!root) return nullptr;
    if (root->data > n1 && root->data > n2) return findLCA(root->left, n1, n2);
    if (root->data < n1 && root->data < n2) return findLCA(root->right, n1, n2);
    return root;
}

int findDistanceFromRoot(Node* root, int key) {
    if (!root) return 0;
    if (root->data == key) return 0;
    if (root->data > key) return 1 + findDistanceFromRoot(root->left, key);
    return 1 + findDistanceFromRoot(root->right, key);
}

int findDistanceBetweenNodes(Node* root, int n1, int n2) {
    Node* lca = findLCA(root, n1, n2);
    int d1 = findDistanceFromRoot(lca, n1);
    int d2 = findDistanceFromRoot(lca, n2);
    return d1 + d2;
}

int main() {
    Node* root = new Node(20);
    root->left = new Node(10);
    root->right = new Node(30);
    root->left->left = new Node(5);
    root->left->right = new Node(15);
    root->right->right = new Node(40);

    int n1 = 5, n2 = 15;
    cout << findDistanceBetweenNodes(root, n1, n2) << endl;

    return 0;
}
