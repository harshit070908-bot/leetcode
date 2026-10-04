struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(!l1) return l2;
        if(!l2) return l1;

        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* prev = 0;

        int carry {};
        int sum {};

        while(temp1 || temp2){
            if(temp1 && temp2){
                sum = temp1->val + temp2->val + carry;
                temp1->val = sum % 10;
                carry = sum / 10;
                prev = temp1;
                temp1 = temp1->next;
                temp2 = temp2->next;
            }else{
                if(temp1){
                    sum = temp1->val + carry;
                    temp1->val = sum % 10;
                    carry = sum / 10;
                    prev = temp1;
                    temp1 = temp1->next;
                }else{
                    sum = temp2->val + carry;
                    prev->next = temp2;
                    temp2->val = sum % 10;
                    carry = sum / 10;
                    prev = prev->next;
                    temp2 = temp2->next;
                }
            }
        }

        if(carry) prev->next = new ListNode(carry);
        return l1;
    }
};