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
    int sum(TreeNode* a, TreeNode* b){
        return a->val + b->val;
    }

    bool findTarget(TreeNode* root, int k) {
        if(!root) return 0;

        std::stack<TreeNode*> leftSt;
        std::stack<TreeNode*> rightSt;

        TreeNode* left = root;
        TreeNode* right = root;

        while(left){
            leftSt.push(left);
            left = left->left;
        }

        while(right){
            rightSt.push(right);
            right = right->right;
        }

        while(!leftSt.empty() && !rightSt.empty()){
            TreeNode* l = leftSt.top();
            TreeNode* r = rightSt.top();

            if(l == r) return 0;

            if(sum(l, r) == k) return 1;
            if(sum(l, r) < k){
                TreeNode* temp = l->right;
                leftSt.pop();

                while(temp){
                    leftSt.push(temp);
                    temp = temp->left;
                }
            }else{
                TreeNode* temp = r->left;
                rightSt.pop();

                while(temp){
                    rightSt.push(temp);
                    temp = temp->right;
                }
            }
        }

        return 0;
    }
};