#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

bool isMirror(TreeNode* t1, TreeNode* t2) {
    if(!t1 && !t2) return true;
    if(!t1 || !t2) return false;
    return t1->val == t2->val &&
           isMirror(t1->left, t2->right) &&
           isMirror(t1->right, t2->left);
}

bool isSymmetric(TreeNode* root) {
    return isMirror(root, root);
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
    cout << (isSymmetric(root) ? "true" : "false") << endl;
    return 0;
}
