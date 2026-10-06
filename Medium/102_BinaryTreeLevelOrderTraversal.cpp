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
    std::vector<std::vector<int>> levelOrder(TreeNode* root) {
        if(!root) return {};
        
        std::vector<std::vector<int>> result;
        std::vector<TreeNode*> v {root};
        size_t prev {}, size {v.size()};

        while(prev < size){
            result.push_back({});

            for(; prev < size; prev++){
                result[result.size() - 1].push_back(v[prev]->val);

                if(v[prev]->left) v.push_back(v[prev]->left);
                if(v[prev]->right) v.push_back(v[prev]->right);
            }
            
            size = v.size();
        }

        return result;
    }
};