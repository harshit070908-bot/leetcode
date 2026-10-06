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
    bool isSymmetric(TreeNode* root) {
        if(!root) return 1;

        std::stack<TreeNode*> st1;
        std::stack<TreeNode*> st2;

        TreeNode* temp1 = root;
        TreeNode* temp2 = root;

        while((temp1 || !st1.empty()) && (temp2 || !st2.empty())){
            while(temp1){
                st1.push(temp1);
                temp1 = temp1->left;
            }

            while(temp2){
                st2.push(temp2);
                temp2 = temp2->right;
            }

            if(st1.size() != st2.size()) return 0;

            temp1 = st1.top();
            temp2 = st2.top();

            st1.pop();
            st2.pop();

            if(temp1->val != temp2->val) return 0;

            temp1 = temp1->right;
            temp2 = temp2->left;
        }

        if(!st1.empty() || !st2.empty()) return 0;

        return 1;
    }
};