#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int findMin(TreeNode* root) {
    if(!root) return -1;
    while(root->left) root = root->left;
    return root->val;
}

int findMax(TreeNode* root) {
    if(!root) return -1;
    while(root->right) root = root->right;
    return root->val;
}

TreeNode* buildTree() {
    int x;
    cin >> x;
    if(x == -1) return nullptr;
    TreeNode* node = new TreeNode(x);
    node->left = buildTree();
    node->right = buildTree();
    return node;
}

int main() {
    TreeNode* root = buildTree();
    cout << findMin(root) << " " << findMax(root) << endl;
    return 0;
}
