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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        int count{0}, index{0};
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        
      index= (count/2)+1;
      temp=head;
      count=0;
      while(count!=index-1){
          temp=temp->next;
          count++;
      }
        
    return temp;
    }
};