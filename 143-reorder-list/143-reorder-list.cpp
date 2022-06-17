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
 void reorderList(ListNode* head)
    {
        ListNode* slow = head;
        ListNode* fast = head->next;
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;

        }
       // slow = slow->next;


        ListNode* p = slow;
        ListNode* q = NULL;
        ListNode* r = q;

        while (p)
        {
            r = q;
            q = p;
            p = p->next;
            q->next = r;

        }
        ListNode* kraj = q;
        ListNode* pocetak = head;
        
        while (kraj && pocetak)
        {

            ListNode* pompocetak = pocetak->next;
            ListNode* pomkraj = kraj->next;
            pocetak->next = kraj;
            kraj->next = pompocetak;
            pocetak = pompocetak;
            kraj = pomkraj;

        }
       

    }
};