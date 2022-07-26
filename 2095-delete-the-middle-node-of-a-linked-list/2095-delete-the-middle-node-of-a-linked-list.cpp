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
    ListNode* deleteMiddle(ListNode* head) {
        
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        
        ListNode* curr=head;
        ListNode* prev=head;
        int numNodes{0};
        while(curr){
            curr=curr->next;
            numNodes++;
        }
        
        int i{0};
        curr=head;
        while(i< numNodes/2){
            prev=curr;
            curr=curr->next;
            i++;
        }
        
        prev->next=curr->next;
        
        return head;
        
    }
};