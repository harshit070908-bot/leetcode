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
    void dfs(TreeNode* root, int level, std::vector<int>& result){
        if(!root) return;

        if(result.size() <= level) result.push_back(root->val);

        dfs(root->right, level + 1, result);
        dfs(root->left, level + 1, result);
    }
    std::vector<int> rightSideView(TreeNode* root) {
        std::vector<int> result;

        dfs(root, 0, result);

        return result;
    }
};