/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
        
        ListNode *slow =head;
        ListNode *fast =head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *prev = NULL;
        
        while(slow){        
            ListNode *n = slow->next;    
            slow->next = prev;
            prev=slow;
            slow=n;      
        }
        ListNode *left = head;
        ListNode *l = left->next;
        ListNode *right = prev;
        ListNode *r = right->next;
        
        while (l && r){
            left->next=right;
            right->next=l;
            left=l;
            right=r;
            l=l->next;
            r=r->next;
        }
        left->next=l;  


    }
};