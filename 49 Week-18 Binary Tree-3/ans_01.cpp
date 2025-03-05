#include <iostream>
#include <queue>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

void leftView(TreeNode* root) {
    if(!root) return;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()) {
        int sz = q.size();
        for(int i = 0; i < sz; ++i) {
            TreeNode* node = q.front(); q.pop();
            if(i == 0) cout << node->val << " ";
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
        }
    }
    cout << endl;
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
    leftView(root);
    return 0;
}
