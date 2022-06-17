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
   ListNode* removeNthFromEnd(ListNode* head, int k) {
       
        ListNode* curr = head;
        ListNode* dummy = head;
        int n = 0;
        while (curr) {
            curr = curr->next;
            n++;
        }
       
        int targetindex = n - k;
       if(!targetindex)return head->next;
        curr = head;
        for (int i = 0; i < targetindex-1; i++)
        {
            curr = curr->next;

        }

        curr->next= curr->next->next;
        return dummy;
    }
};