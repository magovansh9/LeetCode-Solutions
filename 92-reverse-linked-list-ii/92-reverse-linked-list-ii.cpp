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
    bool stop;
    ListNode* leftP;
    
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        this->stop=false;
        this->leftP=head;
        recurseAndReverse(head, left, right);
        return head;
    }
    
    void recurseAndReverse(ListNode* right, int m, int n){
        
        if(n==1){
            return;
        }
        
        right=right->next;
        
        if(m>1){
            this->leftP=this->leftP->next;
        }
        
        recurseAndReverse(right, m-1, n-1);
        
        if(this->leftP==right || right->next==this->leftP){
            this->stop=true;
            return;
        }
        
        if(!this->stop){
            int t=this->leftP->val;
            this->leftP->val=right->val;
            right->val=t;
            
            this->leftP=this->leftP->next;     
        }
    }
};