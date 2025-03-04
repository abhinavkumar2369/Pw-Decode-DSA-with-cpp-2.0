#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

vector<vector<int>> levelOrderRightToLeft(TreeNode* root) {
    vector<vector<int>> res;
    if(!root) return res;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()) {
        int sz = q.size();
        vector<int> level;
        for(int i = 0; i < sz; ++i) {
            TreeNode* node = q.front(); q.pop();
            level.push_back(node->val);
            if(node->right) q.push(node->right);
            if(node->left) q.push(node->left);
        }
        res.push_back(level);
    }
    return res;
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
    vector<vector<int>> ans = levelOrderRightToLeft(root);
    for(auto& level : ans) {
        for(int v : level) cout << v << " ";
        cout << endl;
    }
    return 0;
}
