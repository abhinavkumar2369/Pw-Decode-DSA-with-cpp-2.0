#include <iostream>
#include <climits>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int findMin(TreeNode* root) {
    if(!root) return INT_MAX;
    int leftMin = findMin(root->left);
    int rightMin = findMin(root->right);
    return min(root->val, min(leftMin, rightMin));
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
    cout << findMin(root) << endl;
    return 0;
}
