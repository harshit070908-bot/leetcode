#include <deque>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        std::deque<int> deck;

        ListNode* temp = head;
        while(temp != NULL){
            deck.push_back(temp->val);
            temp = temp->next;
        }

        while(!deck.empty()){
            if(deck.front() == deck.back()){
                deck.pop_back();
                if(!deck.empty()) deck.pop_front();
            }else{
                return 0;
            }
        }

        return 1;
    }
};