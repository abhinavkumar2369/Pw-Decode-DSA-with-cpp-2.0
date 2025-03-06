#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int x) : data(x), left(nullptr), right(nullptr) {}
};

bool countSubtreesInRange(Node* root, int low, int high, int& count) {
    if (!root) return true;
    bool leftInRange = countSubtreesInRange(root->left, low, high, count);
    bool rightInRange = countSubtreesInRange(root->right, low, high, count);
    if (leftInRange && rightInRange && root->data >= low && root->data <= high) {
        count++;
        return true;
    }
    return false;
}

int getCountSubtreesInRange(Node* root, int low, int high) {
    int count = 0;
    countSubtreesInRange(root, low, high, count);
    return count;
}

int main() {
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(50);
    root->left->left = new Node(1);
    root->left->right = new Node(8);
    root->right->right = new Node(100);

    int low = 5, high = 45;
    cout << getCountSubtreesInRange(root, low, high) << endl;

    return 0;
}
