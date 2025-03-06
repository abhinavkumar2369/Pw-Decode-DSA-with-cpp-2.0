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

TreeNode* build(vector<int>& preorder, int preL, int preR, vector<int>& postorder, int postL, int postR, unordered_map<int,int>& postIdx) {
    if(preL > preR) return nullptr;
    TreeNode* root = new TreeNode(preorder[preL]);
    if(preL == preR) return root;
    int leftRootVal = preorder[preL+1];
    int idx = postIdx[leftRootVal];
    int leftSize = idx - postL + 1;
    root->left = build(preorder, preL+1, preL+leftSize, postorder, postL, idx, postIdx);
    root->right = build(preorder, preL+leftSize+1, preR, postorder, idx+1, postR-1, postIdx);
    return root;
}

void inorder(TreeNode* root) {
    if(!root) return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

int main() {
    int n;
    cin >> n;
    vector<int> preorder(n), postorder(n);
    for(int i = 0; i < n; ++i) cin >> preorder[i];
    for(int i = 0; i < n; ++i) cin >> postorder[i];
    unordered_map<int,int> postIdx;
    for(int i = 0; i < n; ++i) postIdx[postorder[i]] = i;
    TreeNode* root = build(preorder, 0, n-1, postorder, 0, n-1, postIdx);
    inorder(root);
    cout << endl;
    return 0;
}
