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
    ListNode* addTwoNumbers(ListNode* list1, ListNode* list2) {
        
        stack<int> stack1, stack2;
        while(list1){stack1.push(list1->val); list1 = list1->next;}
        while(list2){stack2.push(list2->val); list2 = list2->next;}
        int sum = 0;
        int carry = 0;
        ListNode* currNode = nullptr;
        while(stack1.size() or stack2.size()){
            int val1 = stack1.size() ? stack1.top() : 0;
            int val2 = stack2.size() ? stack2.top() : 0;
            if(stack1.size()) stack1.pop();
            if(stack2.size()) stack2.pop();
            sum = val1 + val2 + carry;
            currNode = new ListNode(sum%10, currNode);
            carry = sum/10;
            sum /= 10;
        }
        if(sum){currNode = new ListNode(sum, currNode);}
        return currNode;
    }
};