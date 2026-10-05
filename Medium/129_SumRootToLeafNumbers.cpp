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
    void dfs(TreeNode* root, int currSum, int& result){
        if(!root) return;

        currSum = currSum * 10 + root->val;

        if(!root->left && !root->right){
            result += currSum;
            return;
        }

        dfs(root->left, currSum, result);
        dfs(root->right, currSum, result);
    }
    
    int sumNumbers(TreeNode* root) {
        int result {};

        dfs(root, 0, result);

        return result;
    }
};