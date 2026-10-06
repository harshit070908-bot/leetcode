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
    int sumOfLeftLeaves(TreeNode* root) {
        int result {};

        TreeNode* current = root;
        std::stack<TreeNode*> st;

        while(current || !st.empty()){
            
            while(current){
                st.push(current);
                current = current->left;
                if(current && !current->right && !current->left){
                    result += current->val;
                }
            }

            current = st.top();
            st.pop();

            current = current->right;
        }

        return result;
    }
};