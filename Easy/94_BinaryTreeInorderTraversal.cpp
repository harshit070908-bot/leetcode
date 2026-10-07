#include <vector>
#include <stack>

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
    std::vector<int> inorderTraversal(TreeNode* root) {
        std::vector<int> result;

        TreeNode* current = root;
        std::stack<TreeNode*> st;

        while(!st.empty() || current){
            while(current){
                st.push(current);
                current = current->left;
            }

            current = st.top();
            st.pop();

            result.push_back(current->val);

            current = current->right;
        }

        return result;
    }
};