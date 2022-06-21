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
    
    ListNode* insertionSortList(ListNode* head) {
      
        
        ListNode* curr=head;
     for(curr=head;curr;curr=curr->next)
      {
                    
          
       for( ListNode*curr1=head;curr1;curr1=curr1->next)
          
       {
           if(curr->val<curr1->val)
           {
            int t=curr->val;
               curr->val=curr1->val;
               curr1->val=t;
           }
       }
        
          
      }
    return head;
    }
};