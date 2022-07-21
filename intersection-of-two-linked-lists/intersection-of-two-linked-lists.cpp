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
        
        // get two nodes to traverse two linked lists
        // add nodes to an unordered set
        // after every addition check if the other set has the node, if yes return
        ListNode* currA= headA;
        ListNode* currB= headB;
        
        unordered_set<ListNode*> usetA;
        
        while(currA){
             usetA.insert(currA);
             currA=currA->next;
        }
        while(currB){
            if(usetA.find(currB)==usetA.end()){
                currB=currB->next;
            }
            else{
                return currB;
            }
        }
        
        return NULL;
        
    }
};