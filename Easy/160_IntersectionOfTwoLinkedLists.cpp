#include <unordered_set>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        std::unordered_set<ListNode*> checked;
        ListNode* temp = headA;
        while(temp != nullptr){
            checked.insert(temp);
            temp = temp->next;
        }

        temp = headB;
        while(temp != nullptr){
            if(checked.contains(temp)){
                return temp;
            }
            temp = temp->next;
        }

        return nullptr;
    }
};