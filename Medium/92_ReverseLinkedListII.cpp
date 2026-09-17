#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left == right) return head;

        ListNode* prev = 0;
        ListNode* curr = 0;
        ListNode* n = head;

        for(int i {}; i < left; i++){
            prev = curr;
            curr = n;
            n = n->next;
        }

        ListNode* last = curr;
        ListNode* first = prev;

        for(int i {left}; i < right; i++){
            prev = curr;
            curr = n;
            n = n->next;
            curr->next = prev;
        }

        last->next = n;

        if(first == 0){
            return curr;
        }

        first->next = curr;
        return head;
    }
};