class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = 0;
        random = 0;
    }
};

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head) return 0;
        Node* temp0 = 0;
        Node* temp1 = head;
        while(temp1){
            temp0 = temp1;
            temp1 = temp1->next;
            Node* nn = new Node(temp0->val);
            temp0->next = nn;
            nn->next = temp1;
        }

        Node* newHead = head->next;
        temp1 = head;
        while(temp1){
            if(temp1->random){
                temp1->next->random = temp1->random->next;
            }
            temp1 = temp1->next->next;
        }

        temp0 = head;
        temp1 = newHead;
        while(temp1 && temp1->next){
            temp0->next = temp0->next->next;
            temp0 = temp0->next;

            temp1->next = temp1->next->next;
            temp1 = temp1->next;
        }
        temp0->next = 0;

        return newHead;
    }
};