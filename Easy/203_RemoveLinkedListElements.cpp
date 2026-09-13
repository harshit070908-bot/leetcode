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
    ListNode* removeElements(ListNode* head, int val){
        while(head != NULL && head->val == val){
            ListNode* del = head;
            head = head->next;
            delete del;
        }

        ListNode* first = NULL;
        ListNode* second = NULL;

        if(head != NULL){
            first = head;
            second = head->next;
        }

        while(second != NULL){
            if(second->val == val){
                ListNode* del = second;
                second = second->next;
                delete del;
                first->next = second;
            }else{
                first = second;
                second = second->next;
            }
        }

        return head;
    }
};