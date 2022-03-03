/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode* r1=headA;
        ListNode* r2=headB;
        while(r1!=r2){
            r1=!r1?headB:r1->next;
            r2=!r2?headA:r2->next;
        }
        return r1;
    }
};