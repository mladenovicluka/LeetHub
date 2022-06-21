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
    bool hasCycle(ListNode * head) {
        if(!head)return false;
        ListNode * slow=head;
        ListNode * fast=head->next;;
        while(slow&&fast&&fast->next)
        {
        if(slow==fast)return true;
        fast=fast->next->next;
            slow=slow->next;
        
        }
        return false;
    }
};