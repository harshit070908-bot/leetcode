struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        // no rotation possible
        if(!head) return 0;
        if(!head->next) return head;

        ListNode* temp = head;
        size_t size {};
        while(temp){
            temp = temp->next;
            size++;
        }

        if(k%size == 0) return head;

        temp = head;
        for(int i {}; i < k%size; i++) temp = temp->next;

        ListNode* newHead = head;
        while(temp->next){
            newHead = newHead->next;
            temp = temp->next;
        }

        // linking the two linked list's part
        ListNode* tail = newHead;
        newHead = newHead->next;
        tail->next = 0;
        temp->next = head;

        return newHead;
    }
};