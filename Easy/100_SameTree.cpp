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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        std::stack<TreeNode*> s1;
        std::stack<TreeNode*> s2;

        s1.push(p);
        s2.push(q);

        while(!s1.empty() && !s2.empty()) {
            TreeNode* a = s1.top();
            TreeNode* b = s2.top();

            s1.pop();
            s2.pop();

            if(!a && !b) continue;
            if(!a || !b) return false;

            if(a->val != b->val) return false;

            s1.push(a->right);
            s1.push(a->left);

            s2.push(b->right);
            s2.push(b->left);
        }

        return s1.empty() && s2.empty();
    }
};