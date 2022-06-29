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
        
        if(head==NULL){
            return NULL;
        }
        
        ListNode* head2 = new ListNode();
        ListNode* ptr = new ListNode();
        
        head2->val= head->val;
        ptr= head->next; 
        
        while(ptr!=NULL){
            push(&head2, ptr->val); 
            ptr=ptr->next; 
        }
      
        return head2;
        
    }
    
    void push(ListNode** head, int value){
        
        // make a new node
        ListNode* ptr = new ListNode(); 
        ptr->val = value;
        
        // assign ptr's next to head
        ptr->next= *head;
        
        // assign head to ptr
        *head=ptr;
    }
};