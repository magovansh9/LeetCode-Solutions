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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
       // use hashing, an unordered set to store the visited nodes of the first Linked list
       // traverse the second linked list, if a node is found in the hashed set return it
       // if no common node, return NULL
        
        unordered_set<ListNode*> uset;
        while(headA){
            uset.insert(headA);
            headA=headA->next;
        }
        
        while(headB){
            // not found
            if(uset.find(headB)==uset.end()){
                headB=headB->next;
            }
            else{
                return headB;
            }
        }
        
        return NULL;
        
    }
};