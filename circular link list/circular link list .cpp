#include<iostream>
using namespace std;
struct node
    {
        int item;
        node *next;
    };
class CLL
{
private :
    node *last;
public :
    CLL()
    {
        last=nullptr;
    }
    void insertfirst(int data)
    {
        node *n=new node;
        n->item=data;
        if(last)
        {
            node *p=last->next;
            n->next=p;
            last->next=n;
        }
        else
        {
              n->next=n;
              last=n;
        }
    }
    void insertlast(int data)
    {
        node *n=new node;
        n->item=data;
        if(last)
        {
            n->next=last->next;
            last->next=n;
            last=n;
        }
         else
        {
              n->next=n;
              last=n;
        }
    }
    node* searchnode(int data)
    {
        node *p;
        if(last)
        {
            p=last->next;
            while(p!=last->next)
            {
                if(p->item==data)
                    return p;
                p=p->next;
            }
        }
        else
            cout<<"list is empty";
        return nullptr;
    }
    void afternode(node *ptr,int data)
    {
        if(ptr)
        {
             node *n=new node;
             n->item=data;
             n->next=ptr->next;
             ptr->next=n;
             if(ptr==last)
                last=n;
        }
    }
    void deletefirst()
    {
        if(last)
        {
             node *t;
             t=last->next;
             if(last->next==last)
                last=nullptr;
             else
                last->next=t->next;
             delete t;
         }
    }
    void deletelast()
        {
             if(last)
             {
                 node *t=last;
                 while(t->next!=last)
                     t=t->next;
                     if(t==last)
                     {
                         delete t;
                         last=nullptr;
                     }
                     else
                     {
                        t->next=last->next;
                        delete last;
                        last=t;
                     }
             }
         }

         void printlist()
         {
             if(last)
             {
             node *p=last->next;
             while(p!=last)
             {
                 cout<<p->item<<" ";
                 p=p->next;
             }
             }


         }
};
int main()
{
    CLL d;
    //d.insertfirst(4);
   // d.insertfirst(4);
   // d.deletefirst();
    d.insertlast(3);
    d.printlist();
    return 0;
}
