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
void reorderList(ListNode* head) {
     deque<int> dq;
     ListNode* curr=head;
    while(curr)
    {
        dq.push_back(curr->val);
        curr=curr->next;
    }
        
    ListNode* newlist=NULL;
    while(1)
    {
        
                
         if(dq.empty())break;
        
        ListNode* pom1=(ListNode*)malloc(sizeof(ListNode));
        pom1->val=dq.front();
        dq.pop_front();
        pom1->next=NULL;
        if(!newlist)newlist=pom1;
        else
        {
         ListNode* x=newlist;
            while(x->next)x=x->next;
            x->next=pom1;
        
        }
        if(dq.empty())break;
        
        ListNode* pom=(ListNode*)malloc(sizeof(ListNode));
        pom->val=dq.back();
        dq.pop_back();
        pom->next=NULL;
        if(!newlist)newlist=pom;
        else
        {
         ListNode* x=newlist;
            while(x->next)x=x->next;
            x->next=pom;
        
        }

              
        
    }
      while(head)
      {
          head->val=newlist->val;
          head=head->next;
          newlist=newlist->next;
      }
    
        head=newlist;
        
    }
};