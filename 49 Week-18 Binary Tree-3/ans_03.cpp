#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

TreeNode* build(vector<int>& inorder, int inL, int inR, vector<int>& postorder, int postL, int postR, unordered_map<int,int>& idx) {
    if(inL > inR || postL > postR) return nullptr;
    int rootVal = postorder[postR];
    TreeNode* root = new TreeNode(rootVal);
    int inRoot = idx[rootVal];
    int leftSize = inRoot - inL;
    root->left = build(inorder, inL, inRoot-1, postorder, postL, postL+leftSize-1, idx);
    root->right = build(inorder, inRoot+1, inR, postorder, postL+leftSize, postR-1, idx);
    return root;
}

void preorder(TreeNode* root) {
    if(!root) return;
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}

int main() {
    int n;
    cin >> n;
    vector<int> inorder(n), postorder(n);
    for(int i = 0; i < n; ++i) cin >> inorder[i];
    for(int i = 0; i < n; ++i) cin >> postorder[i];
    unordered_map<int,int> idx;
    for(int i = 0; i < n; ++i) idx[inorder[i]] = i;
    TreeNode* root = build(inorder, 0, n-1, postorder, 0, n-1, idx);
    preorder(root);
    cout << endl;
    return 0;
}
