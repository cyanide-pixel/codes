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
        
            
        if(!head || !head->next || !head->next->next) return;
        
        //Find the penultimate node i.e second last node of the linkedlist
        ListNode* Ls = head;
        while (Ls->next->next) Ls = Ls->next;
        
        // Link the penultimate with the second element
        Ls->next->next = head->next;
        head->next = Ls->next;
        
        //Again set the penultimate to the the last 
        Ls->next = NULL;
        
        // Do the above steps rcursive
        reorderList(head->next->next);
    }
};