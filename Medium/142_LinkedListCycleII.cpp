struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(0) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;

        while(fast){
            fast = fast->next;
            if(fast == slow){
                slow = head;
                break;
            }
            slow = slow->next;
            if(fast){
                fast = fast->next;
                if(fast == slow){
                    slow = head;
                    break;
                }
            }
        }

        if(!fast) return 0;

        while(slow != fast){
            fast = fast->next;
            if(fast == slow) break;
            slow = slow->next;
        }

        return fast;
    }
};