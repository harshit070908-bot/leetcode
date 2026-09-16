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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = nullptr;
        
        if(list2 == nullptr) return list1;
        if(list1 == nullptr) return list2;

        ListNode* first = list1;
        ListNode* second = list2;
        ListNode* temp = nullptr;

        bool checked {};

        while(first != nullptr){
            if(first->val < second->val){
                temp = first;
                first = first->next;
                if(!checked){
                    checked = 1;
                    head = list1;
                }
            }else{
                if(!checked){
                    checked = 1;
                    head = list2;
                }
                if(temp != nullptr){
                    temp->next = second;
                    second = second->next;
                    temp = temp->next;
                }else{
                    temp = second;
                    second = second->next;
                }
                temp->next = first;
                if(second == nullptr) break;
            }
        }

        if(second != NULL){
            temp->next = second;
        }

        return head;
    }
};