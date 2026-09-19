struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head){
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast && fast->next){
            fast = fast->next->next;
            if(fast && fast->next){
                slow = slow->next;
            }
        }
        return slow;
    }

    ListNode* deleteMiddle(ListNode* head) {
        if(!head || !head->next) return 0;

        ListNode* mid = middleNode(head);
        ListNode* del = mid->next;
        mid->next = mid->next->next;
        delete del;
        return head;
    }
};