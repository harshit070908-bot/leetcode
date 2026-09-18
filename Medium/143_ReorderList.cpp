struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(0) {}
    ListNode(int x) : val(x), next(0) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode* fast = head;
        ListNode* prev = 0;
        ListNode* curr = 0;
        ListNode* next = head;
        ListNode* temp = head;
        ListNode* rprev = 0;

        while(fast){
            fast = fast->next;
            if(fast){
                next = next->next;
                fast = fast->next;
            }
        }

        while(next){
            prev = curr;
            curr = next;
            next = next->next;
            curr->next = prev;
        }

        while(temp && curr){
            prev = temp;
            temp = temp->next;
            rprev = curr;
            curr = curr->next;
            if(prev != rprev){
                prev->next = rprev;
            }
            if(rprev != temp){
                rprev->next = temp;
            }
        }
    }
};