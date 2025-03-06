#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

void inorder(TreeNode* root, vector<int>& vals) {
    if(!root) return;
    inorder(root->left, vals);
    vals.push_back(root->val);
    inorder(root->right, vals);
}

TreeNode* buildBalanced(vector<int>& vals, int l, int r) {
    if(l > r) return nullptr;
    int m = l + (r - l) / 2;
    TreeNode* node = new TreeNode(vals[m]);
    node->left = buildBalanced(vals, l, m-1);
    node->right = buildBalanced(vals, m+1, r);
    return node;
}

TreeNode* balanceBST(TreeNode* root) {
    vector<int> vals;
    inorder(root, vals);
    return buildBalanced(vals, 0, vals.size()-1);
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

void preorder(TreeNode* root) {
    if(!root) return;
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}

int main() {
    TreeNode* root = buildTree();
    TreeNode* balanced = balanceBST(root);
    preorder(balanced);
    cout << endl;
    return 0;
}
