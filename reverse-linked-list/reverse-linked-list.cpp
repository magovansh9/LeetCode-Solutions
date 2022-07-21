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
        
      // make a new linked list, traverse the first list and push to the head of the new list
        
        if(!head){
            return NULL;
        }
        
        ListNode* head2= new ListNode();
        head2->val= head->val;
        head=head->next;
        
        while(head){
            ListNode* new_node= new ListNode();
            new_node->val=head->val;
            new_node->next=head2;
            head2=new_node;
            head=head->next;
        }
        
        return head2;
    
    }
};