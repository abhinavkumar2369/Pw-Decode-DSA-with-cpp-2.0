#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int kthSmallest(TreeNode* root, int& k) {
    if(!root) return -1;
    int left = kthSmallest(root->left, k);
    if(k == 0) return left;
    k--;
    if(k == 0) return root->val;
    return kthSmallest(root->right, k);
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
    int k;
    cin >> k;
    cout << kthSmallest(root, k) << endl;
    return 0;
}
