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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        // instantiate two pointers, move the second pointer upto nth node from the start
        // move both pointers until the second pointer reaches the end
        // the first pointer will be at the K-N+1th node, this is the node you want to delete
        // use a prev pointer to keep track of the previous node
        
        ListNode* p1=head;
        ListNode* p2=head;
        ListNode* prev=head;
        
        for(int i=0; i<n; i++){
            if(p2->next==NULL){
                if(i==n-1){
                    head=head->next;
                }
                return head;
            }
            p2=p2->next;
        }
        
        while(p2){
            prev=p1;
            p2=p2->next;
            p1=p1->next;
        }
        
        prev->next=p1->next;
        return head;
    }
};