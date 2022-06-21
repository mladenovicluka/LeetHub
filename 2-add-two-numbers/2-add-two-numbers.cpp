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
    
    int lengthll(ListNode* l1)
    {
        ListNode* x=l1;
        int i=0;
        while(x)
        {
            i++;
            x=x->next;
        }
        return i;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int n1=lengthll(l1);
        int n2=lengthll(l2);
        int maks;
        if(n1>n2)maks=n1;
        else maks=n2;
        ListNode* head=new ListNode(0);
        for(int i=0;i<maks;i++)
        {
        ListNode* pom=new ListNode(0);
            pom->next=head;
            head=pom;
        }
        int prenos=0;
         ListNode* curr=head;
        while(l1&&l2)
        {
            if(l1->val+l2->val+prenos>=10)
            {

                curr->val=l1->val+l2->val+prenos-10;
                prenos=1;
                
            }
            else {
                curr->val=l1->val+l2->val+prenos;
                prenos=0;
            }
            l1=l1->next;
            l2=l2->next;
            curr=curr->next;
        }
        while(l1)
        {
            if(l1->val+prenos>=10)
            {
                curr->val=l1->val+prenos-10;
                prenos=1;
            }else{curr->val=l1->val+prenos;prenos=0;}
            l1=l1->next;
             curr=curr->next;
        }
        if(prenos)curr->val=1;
        
        while(l2)
        {
            if(l2->val+prenos>=10)
            {
                curr->val=l2->val+prenos-10;
                prenos=1;
            }else{curr->val=l2->val+prenos;prenos=0;}
            l2=l2->next;
             curr=curr->next;
        }
         if(prenos)curr->val=1;
        ListNode*  final=head;
        ListNode* slow=final;
        int prviput=1;
        while(final->next)
        {
            if(prviput)prviput=0;
            else{
            slow=slow->next;}
            final=final->next;
        }
        if(!final->val)slow->next=NULL;
        return head;
    }
};