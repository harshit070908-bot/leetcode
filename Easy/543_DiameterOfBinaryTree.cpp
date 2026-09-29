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
    int height(TreeNode* root, int& result){
        if(!root) return 0;

        int leftHeight = height(root->left, result);
        int rightHeight = height(root->right, result);

        result = std::max(result, leftHeight + rightHeight);

        return 1 + std::max(leftHeight, rightHeight);
    }

    int diameterOfBinaryTree(TreeNode* root){
        int result {};

        height(root, result);

        return result;
    }
};