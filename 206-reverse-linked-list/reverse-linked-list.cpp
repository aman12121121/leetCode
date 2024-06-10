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
    ListNode* reverse(ListNode*curr,ListNode*prev){
        if(!curr->next){
            curr->next = prev;
            return curr;
        }
        ListNode *n = curr->next;
        curr->next = prev;
        return reverse(n,curr);

    }
    ListNode* reverseList(ListNode* head) {
        if(!head) return head; 
        return reverse(head,NULL) ;    
    }
};