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
    ListNode* reverse(ListNode *head){
    ListNode* prevNode = NULL;
    ListNode* currNode = head;
    while(currNode){
        ListNode* next = currNode->next;
        currNode->next = prevNode;
        prevNode = currNode;
        currNode = next;
    }
    return prevNode;
}
    
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if(m == n)
        return head;
        
        ListNode* revStart = NULL;
        ListNode* revEnd = NULL;
        ListNode* revPrev = NULL;
        ListNode* revNext = NULL;
        ListNode* currNode = head;
        int i = 1;
        
        while(currNode && i <= n){
            if( i < m)
                revPrev = currNode;
            if(i == m)
                revStart = currNode;
            if(i == n){
                revEnd = currNode;
                revNext = currNode->next;
            }
            currNode = currNode->next;
            i++;
        }
        revEnd->next = NULL;
        revEnd = reverse(revStart);

   
        if(revPrev) revPrev->next = revEnd;
        else
            head = revEnd;

  
        revStart->next = revNext;
        return head;
    }
};