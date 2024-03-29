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
ListNode* merge(ListNode* l1,ListNode* l2){
        if(!l1)
            return l2;
        if(!l2)
            return l1;
        ListNode* temp=NULL;
        if(l1->val<l2->val){
            temp=l1;
            temp->next=merge(l1->next,l2);
        }
        else{
            temp=l2;
            temp->next=merge(l1,l2->next);
        }
            return temp;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* head=NULL;
        for(auto list:lists){
            head=merge(head,list);
        }
        return head;
    }
};