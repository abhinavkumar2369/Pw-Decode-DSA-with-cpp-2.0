#include <iostream>
#include <algorithm>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

struct Info {
    int height;
    int diameter;
    Info(int h, int d) : height(h), diameter(d) {}
};

Info diameterHelper(TreeNode* root) {
    if(!root) return Info(0, 0);
    Info l = diameterHelper(root->left);
    Info r = diameterHelper(root->right);
    int h = max(l.height, r.height) + 1;
    int d = max({l.diameter, r.diameter, l.height + r.height});
    return Info(h, d);
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
    cout << diameterHelper(root).diameter << endl;
    return 0;
}
