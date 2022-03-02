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
    ListNode* mergeTwoLists(ListNode* first, ListNode* second) {
        
        if(first==NULL)
            return second;
        if(second==NULL)
            return first;
		
	    ListNode* f = first;
		ListNode* s = second;
		ListNode* dummy = new ListNode(-1);
		ListNode* fin = dummy;
		
		while(f!=NULL && s!=NULL)
		{
			if(f->val < s->val)
			{
				fin->next = f;
				f = f->next;
			}
			else
			{
				fin->next = s;
				s = s->next;
			}
			fin = fin->next;
		}
		
		if(f!=NULL)
		fin->next = f;
		
		if(s!=NULL)
		fin->next = s;
		
		return dummy->next;
    }
};