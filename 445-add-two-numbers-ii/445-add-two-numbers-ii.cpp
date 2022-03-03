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
      
    ListNode* reverse(ListNode* head){
        ListNode* prev=NULL,*curr=head,*fur=head;
        while(fur!=NULL){
            fur=fur->next;
            curr->next=prev;
            prev=curr;
            curr=fur;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* a=reverse(l1),*b=reverse(l2);
        int currsum=a->val + b->val;
        int currnodeval=currsum%10;
        int carry=currsum/10;
        ListNode* ans=new ListNode(currnodeval);
        ListNode* curr=ans;
        a=a->next;
        b=b->next;
        while(a or b or carry){
            currsum=0;
            if(a){
                currsum+=a->val;
                a=a->next;
            }
            if(b){
                currsum+=b->val;
                b=b->next;
            }
            if(carry)currsum+=carry;
            carry=currsum/10;
            ListNode *newNode = new ListNode(currsum%10);
            curr->next = newNode;
            curr = newNode;
            }
        ListNode* res=reverse(ans);
        return res;
        
    }
};