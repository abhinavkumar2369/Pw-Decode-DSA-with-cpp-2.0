#include <iostream>
#include <queue>
#include <map>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

vector<int> bottomView(TreeNode* root) {
    map<int, int> mp;
    queue<pair<TreeNode*, int>> q;
    q.push({root, 0});
    while(!q.empty()) {
        auto [node, hd] = q.front(); q.pop();
        if(node) {
            mp[hd] = node->val;
            q.push({node->left, hd - 1});
            q.push({node->right, hd + 1});
        }
    }
    vector<int> res;
    for(auto& p : mp) res.push_back(p.second);
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
    vector<int> res = bottomView(root);
    for(int x : res) cout << x << " ";
    cout << endl;
    return 0;
}
