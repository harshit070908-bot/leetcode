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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* first = head;
        ListNode* second = nullptr;

        for(size_t i {}; i < n; i++){
            first = first->next;
        }
        second = head;

        if(first == NULL){
            head = head->next;
            delete second;
            return head;
        }

        while(first->next != NULL){
            first = first->next;
            second = second->next;
        }

        ListNode* del = second->next;
        second->next = second->next->next;
        delete del;

        return head;
    }
};