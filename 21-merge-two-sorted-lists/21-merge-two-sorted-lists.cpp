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
        

        ListNode* head=NULL;
        
        while(a&&b)
        {
            ListNode* pom=(ListNode*)malloc(sizeof(ListNode));
            pom->next=NULL;
            if(a->val<=b->val)
            {
                pom->val=a->val;
            if(!head)
            {
                head=pom;
            }
            else
            {
            ListNode* x=head;
                while(x->next)x=x->next;
                x->next=pom;
            }
                a=a->next;
            }
        
            else
            {
            pom->val=b->val;
            if(!head)
            {
                head=pom;
            }
            else
            {
            ListNode* x=head;
                while(x->next)x=x->next;
                x->next=pom;
            }
                b=b->next;
            }
        
        }
        
        while(a)
        {
            ListNode* pom=(ListNode*)malloc(sizeof(ListNode));
            pom->next=NULL;
            
                pom->val=a->val;
            if(!head)
            {
                head=pom;
            }
            else
            {
            ListNode* x=head;
                while(x->next)x=x->next;
                x->next=pom;
            }
                a=a->next;
        }
        while(b)
           {
            ListNode* pom=(ListNode*)malloc(sizeof(ListNode));
            pom->next=NULL;
            
                pom->val=b->val;
            if(!head)
            {
                head=pom;
            }
            else
            {
            ListNode* x=head;
                while(x->next)x=x->next;
                x->next=pom;
            }
                b=b->next;
        }
        return head;
    }
};