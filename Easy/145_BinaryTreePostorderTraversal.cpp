#include <vector>

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
    void push(TreeNode* root, std::vector<int>& result){
        if(!root) return;
        push(root->left, result);
        push(root->right, result);
        result.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        std::vector<int> result;
        push(root, result);
        return result;
    }
};