#include <iostream>
#include <algorithm>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int check(TreeNode* root) {
    if(!root) return 0;
    int lh = check(root->left);
    if(lh == -1) return -1;
    int rh = check(root->right);
    if(rh == -1) return -1;
    if(abs(lh - rh) > 1) return -1;
    return max(lh, rh) + 1;
}

bool isBalanced(TreeNode* root) {
    return check(root) != -1;
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
    cout << (isBalanced(root) ? "true" : "false") << endl;
    return 0;
}
