/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        
        if(!head)
            return NULL;
        Node* curr = head;
        while(curr){
            if(curr->child==NULL){
                curr = curr->next;
                continue;
            }
            Node* temp = curr->child;
            while(temp->next){
                temp = temp->next;
            }
            temp->next = curr->next;
            if(curr->next!=NULL)
                curr->next->prev = temp;
            curr->next = curr->child;
            curr->next->prev = curr;
            curr->child = NULL;
        }
        return head;
    }
};