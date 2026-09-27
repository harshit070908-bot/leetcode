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
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode newTree(0);
        TreeNode* temp {&newTree};

        std::stack<TreeNode*> st;
        TreeNode* current = root;

        while(current || !st.empty()){

            while(current){
                st.push(current);
                current = current->left;
            }

            current = st.top();
            st.pop();

            temp->right = current;
            temp = temp->right;
            temp->left = 0;

            current = current->right;
        }

        return newTree.right;
    }
};