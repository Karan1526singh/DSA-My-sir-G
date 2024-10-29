#include<iostream>
using namespace std;
struct node
{
    int item;
    node *next;
    node *prev;
};
class DLL
{
private :
    node *start =nullptr;
public :
    void insert_at_frist(int data)
    {

            node *n=new node;
             n->item=data;
             n->next=start;
             n->prev=nullptr;
             if(start)
             start->prev=n;
             start=n;
    }
    void insert_at_last(int data)
    {
         node *n=new node;
         n->item=data;
         n->next=nullptr;
         node *p=start;
         if(start)
         {
             while(p->next!=nullptr)
             p=p->next;
             p->next=n;
             n->prev=p;
         }
         else
         {
             n->prev=nullptr;
         }
    }
    node* search(int data)
    {
         if(start)
         {
             node *p=start;
             while(p!=nullptr)
             {
                 if(p->item==data)
                    return p;
                 p=p->next;
             }

         }
             return nullptr;
    }
    void insert_after_node(node *ptr,int data)
    {
        if(ptr)
        {
             node *n=new node;
             n->item=data;
             ptr->next=n;
             n->prev=ptr;
             n->next=nullptr;
             if(ptr->next)
             {
                 ptr->next->prev=n;
                 n->next=ptr->next;
             }
        }
    }
    void delete_first()
    {
        if(start)
        {
            node *p;
            p=start;
            start=start->next;
            if(p->next)
              {
                 start->prev=nullptr;
              }
            delete p;
        }

    }
    void delete_last()
    {
        if(start)
        {
            node *p=start;
            while(p->next!=nullptr)
                p=p->next;
            if(p->prev)
                p->prev->next=nullptr;
            else
                start=nullptr;
            delete p;
        }
    }
    void delete_specific(node *ptr)
    {
        if(ptr)
        {
             if(ptr->prev)
               {
                  ptr->prev->next=ptr->next;
               }
            else
                start=ptr->next;
            if(ptr->next)
            {
                ptr->next->prev=ptr->prev;
            }
           delete ptr;
        }
    }
    DLL()
    {
        while(start)
        {
            delete_first();
        }
    }
    void printList()
    {
        if(start)
        {
          node *t=start;
        while(t!=nullptr)
        {
            cout<<t->item<<" ";
            t=t->next;
        }
        }
    }
};
int main()
{
    DLL d;
      //d.insert_at_frist(34);
    d.insert_at_last(34);
    //d.delete_first();
    //d.insert_after_node(d.search(34),32);
    d.printList();
    return 0;
}
