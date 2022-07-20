/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
      // using hashing
        unordered_set<ListNode*> uset;
        
        ListNode* curr= head;
        
        while(curr!=NULL){
            
            if(uset.find(curr)==uset.end()){
                uset.insert(curr);
            }
            else{
                return curr;
            }
            
            curr=curr->next; 
        }
        
        return NULL;
        
 
    }
};