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
    std::vector<double> averageOfLevels(TreeNode* root) {
        std::vector<double> result;
        std::vector<TreeNode*> nodes;
        result.push_back(root->val);
        nodes.push_back(root);
        size_t prev {};
        size_t size {1};

        while(prev < size){
            double sum {};

            for(size_t i {prev}; i < size; i++){
                if(nodes[i]->left){
                    sum += nodes[i]->left->val;
                    nodes.push_back(nodes[i]->left);
                }if(nodes[i]->right){
                    sum += nodes[i]->right->val;
                    nodes.push_back(nodes[i]->right);
                }
            }

            if(nodes.size() > size) result.push_back(sum / (nodes.size() - size));
            prev = size;
            size = nodes.size();
        }

        return result;
    }
};