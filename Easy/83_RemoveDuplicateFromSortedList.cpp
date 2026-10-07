struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    void free(ListNode* a, ListNode* b){
        if(a == b) return;
        free(a->next, b);
        delete a;
    }

    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return 0;
        if(!head->next) return head;

        ListNode* temp = head->next;
        ListNode* prev = head;

        while(temp){
            if(temp->val == prev->val){
                temp = temp->next;
            }else{
                free(prev->next, temp);
                prev->next = temp;
                prev = temp;
                temp = temp->next;
            }
        }

        free(prev->next, temp);
        prev->next = 0;

        return head;
    }
};