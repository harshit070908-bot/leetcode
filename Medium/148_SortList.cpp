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
            if(fast){
                slow = slow->next;
            }
        }
        return slow;
    }

    void split(ListNode*& head){
        if(!head->next) return;

        ListNode* mid = middleNode(head);
        ListNode* temp = mid;

        mid = mid->next;
        temp->next = 0;

        split(head);
        split(mid);

        head = merge(head, mid);
    }

    ListNode* merge(ListNode* list1, ListNode* list2){
        ListNode dummy(0);
        ListNode* temp = &dummy;
        while(list1 && list2){
            if(list1->val < list2->val){
                temp->next = list1;
                list1 = list1->next;
            }else{
                temp->next = list2;
                list2 = list2->next;
            }
            temp = temp->next;
        }

        if(list2){
            temp->next = list2;
        }else{
            temp->next = list1;
        }

        return dummy.next;
    }

    ListNode* sortList(ListNode* head){
        if(!head) return head;
        split(head);
        return head;
    }
};