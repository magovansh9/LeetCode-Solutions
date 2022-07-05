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
    ListNode* reverseList(ListNode* head) {
        
        if(head==NULL)
            return NULL;
        
        ListNode* head2= new ListNode();
        head2->val= head->val;
        
        ListNode* traverse= new ListNode();
        traverse= head->next;
        while(traverse!= NULL){
            push_front(&head2, traverse->val);
            traverse=traverse->next;
        }
            
        return head2;
    }
    
    void push_front(ListNode** head, int val){
        
        if(*head==NULL){
            return;
        }
        
        ListNode* node= new ListNode();
        node->val=val;    
        
        node->next= *head;
        *head=node;
     
    }
};