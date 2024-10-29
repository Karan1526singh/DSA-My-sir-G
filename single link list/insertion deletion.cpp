#include<iostream>
using namespace std;
struct node
{
    int item;
    node *next;
};
class SLL
{
private:
    node *start;
public :
    SLL()
    {
        start = nullptr;
    }
    void insertatlast(int data)
    {
        node *t;
        node *n=new node;//
        n->item=data;
        n->next=nullptr;
        if(start==nullptr)
        {
            start=n;
        }
        else
        {
            while(t->next!=nullptr)
               {
                 t=t->next;
               }
               t->next=n;
        }

    }
    void insertatfirst(int data)
    {
       node *p=new node;
       p->item=data;
       if(start)
       {
           p->next=start;
           start=p;
       }
       else
        p->next=nullptr;

    }
    void insert(int data)
    {
        node *ptr=new node;
        ptr->item=data;
        ptr->next=nullptr;
        if(start)
        {
            node *t;
            t=start;
            while(t->next!=nullptr)
            {
                t=t->next;
            }
            t->next=ptr;
        }
        else
        {
            start=ptr;
        }

    }
    node* search(int data)
    {
        node *t;
        t=start;
        while(t->next!=nullptr)
        {
            if(t->item==data)
            return t;
            t=t->next;
        }
        return nullptr;
    }
    void afternode(node *ptr,int data)
    {
        node *n=new node;
        n->item = data;
        n->next=ptr->next;
        ptr->next=n;//

    }
    void deletefirst()
    {
        if(start==nullptr)
        {
            cout<<"zero list";
        }
        else
        {
            node *t;
            t=start;
            start=t->next;
            delete t;
        }
    }
    void deletelastnode()
    {
        node *p=new node;
        node *t;
        t=start;
        while(t->next->next!=nullptr)
        {
            t=t->next;
        }
        t->next=nullptr;
        delete t->next->next;
    }
    void deleteatspecificnode(node *temp)
    {
        node *t;
        if(start==nullptr)
        {

        }
        else
            if(temp)
        {
            if(start == temp)
            {
                start=temp->next;
                delete temp;
            }
            else
            {
                t=start;
                while(t->next!=temp)
                {
                    t=t->next;
                }
                t->next=temp->next;
                delete temp;
            }
        }
    }
    void printList()
    {
        node *t;
        t=start;
        while(t!=nullptr)
        {
            cout<<t->item<<" ";
            t=t->next;
        }
    }
    ~SLL()
    {
        while(start)
        deletefirst();
    }
};
int main()
{
    SLL s;
    s.insert(3);
    s.insert(4);
    s.insertatlast(6);
    s.insertatfirst(45);
    s.deletefirst();
    s.deletelastnode();
    s.printList();
}
