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
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        
        if(!a)return b;
        if(!b)return a;
        
        ListNode* head=(ListNode*)malloc(sizeof(ListNode));
        ListNode* dummy=head;    
        while(a&&b)
        {
            
            if(a->val<b->val)
            {
             head->next=a;
                a=a->next;
            }
            else
            {
                head->next=b;
                b=b->next;
            }
        head=head->next;
        }
        
        if(a)head->next=a;
        if(b)head->next=b;
        return dummy->next;
    }
};