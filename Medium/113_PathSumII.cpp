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
    void dfs(TreeNode* root, int target, std::vector<int>& w, std::vector<std::vector<int>>& v){
        if(!root) return;

        w.push_back(root->val);
        target -= root->val;

        if(!root->right && !root->left){
            if(!target) v.push_back(w);
            w.pop_back();
            return;
        }

        dfs(root->left, target, w, v);
        dfs(root->right, target, w, v);

        w.pop_back();
    }

    std::vector<std::vector<int>> pathSum(TreeNode* root, int targetSum) {
        std::vector<std::vector<int>> v;
        std::vector<int> w;

        dfs(root, targetSum, w, v);

        return v;
    }
};