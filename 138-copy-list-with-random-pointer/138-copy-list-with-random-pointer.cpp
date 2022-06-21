/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    
    
    int indeks(Node*  head,Node*  curr)
    {

    
    Node* it=head;
        int t=0;
    while(it)
    {
            if(it==curr) break;
            it=it->next;
        t++;
    }
    return t;
    }
    
    Node* copyRandomList(Node*  head) {
        
    Node* glava=NULL;
    Node* it=head;
    while(it)
    {
            Node* pom=new Node(0);
            pom->val=it->val;
            pom->next=NULL;
            if(!glava)glava=pom;
            else
            {
                Node* x=glava;
                while(x->next)x=x->next;
                x->next=pom;
            }
            it=it->next;
    }
        int targetindex;
        Node*  glavasecond=glava;
     for(it=head;it;it=it->next)
     {
         targetindex=indeks(head,it->random);
         Node*  y=glava;
         for(int i=0;i<targetindex;i++)
         {
            y=y->next;
         }
         glavasecond->random=y;
         glavasecond=glavasecond->next;
         
         

     }
        return glava;
        
        
        
        
        
        
        
    }
};