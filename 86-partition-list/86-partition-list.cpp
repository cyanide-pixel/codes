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
    ListNode* partition(ListNode* head, int x) {
        queue<int> q1, q2;
        ListNode *rani = head;
        
        while(rani!=NULL) {
            if(rani->val<x) {
                q1.push(rani->val);
            }
            else q2.push(rani->val);
            rani = rani->next;
        }
        
        rani = head;
        
        while(!q1.empty()) {
            rani->val = q1.front();
            q1.pop();
            rani = rani->next;
        }
        
        while(!q2.empty()) {
            rani->val = q2.front();
            q2.pop();
            rani =rani->next;
        }
        
        return head;
        
        
    }
};