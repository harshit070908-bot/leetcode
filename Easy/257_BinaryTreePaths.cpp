#include <vector>
#include <string>

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
    void dfs(TreeNode* root, std::string result, std::vector<std::string>& v){
        if(!root) return;

        result += std::to_string(root->val);
        if(!root->left && !root->right){
            v.push_back(result);
            return;
        }
        result += "->";

        dfs(root->left, result, v);
        dfs(root->right, result, v);
    }

    std::vector<std::string> binaryTreePaths(TreeNode* root) {
        std::vector<std::string> v;

        dfs(root, "", v);

        return v;
    }
};