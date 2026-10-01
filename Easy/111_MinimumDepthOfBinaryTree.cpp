#include <algorithm>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int minDepth(TreeNode* root) {
        if(!root) return 0;
        int minRight {minDepth(root->right)};
        int minLeft {minDepth(root->left)};
        if(!minRight) return 1 + minLeft;
        if(!minLeft) return 1 + minRight;
        return 1 + std::min(minRight, minLeft);
    }
};