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
        
        ListNode* h2= new ListNode();
        h2->val=head->val;
        ListNode* temp= head->next;
        
        while(temp!=NULL){
            ListNode* newNode= new ListNode();
            newNode->val= temp->val;
            newNode->next=h2;
            h2=newNode;
            temp=temp->next;
        }
        
        return h2;
        
    }
};