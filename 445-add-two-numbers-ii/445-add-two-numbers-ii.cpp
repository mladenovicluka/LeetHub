class Solution {
public:
    ListNode* rev(ListNode* l)
    {
        ListNode* prev = NULL;
        while(l!=NULL)
        {
            ListNode* curr = l->next;
            l->next = prev;
            prev = l;
            l = curr;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        int c=0;
        l1 = rev(l1);
        l2 = rev(l2);
        int x = c;
        ListNode* res;
        if(l1!=NULL)
        {
            x += l1->val;
            l1 = l1->next;
        }
        if(l2!=NULL)
        {
            x += l2->val;
            l2 = l2->next;
        }
        c = x/10;
        res = new ListNode(x%10);
        ListNode* head = res;
        while(l1!=NULL or l2!=NULL or c!=0)
        {
            int a=0,b=0;
            if(l1!=NULL)
            {
                a = l1->val;
                l1 = l1->next;
            }
            if(l2!=NULL)
            {
                b = l2->val;
                l2 = l2->next;
            }
            int x = a + b + c;
            res->next = new ListNode(x%10);
            c=x/10;
            res = res->next;
        }
        return rev(head);
    }
};