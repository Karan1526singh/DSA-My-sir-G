#include<iostream>
using namespace std;
struct node
{
    int item;
    node *next;
    node *prev;
};
class CDLL
{
 private :
    node *start;
 public :
    CDLL()
    {
        start=nullptr;
    }
    void insertatstart(int data)
    {
        node *n=new node;
        n->item=data;
        if(start==nullptr)
        {
            n->next=n;
            n->prev=n;
            start=n;
            cout<<"hello";
        }
        else
        {
        n->prev=start->prev;
        n->next=start;
        start->next->prev->next=n;
        start->prev=n;
        }
    }
    void insertatend(int data)
    {
        node *n=new node;
        n->item=data;
       if(start==nullptr)
        {
            n->next=n;
            n->prev=n;
            start=n;
        }
        else
        {
        n->prev=start->prev;
        n->next=start;
        start->prev->next=n;
        start->prev=n;
        }
    }
    node* search(int data)
    {
        node *t=start;
        if(start)
        {
            do
            {
                if(t->item==data)
                    return t;
                t=t->next;
            }while(t!=start);

        }
    }
    void afternode(node *temp,int data)
    {

    if(temp)
    {
        node *n=new node;
        n->item=data;
        n->prev=temp;
        n->next=temp->next;
        temp->next->prev=n;
        temp->next=n;
    }
}
    void deletefirst()
    {
    node *p=start;
    if(start)
    {
        p->next->prev=p->prev;
        p->prev->next=p->next;
        if(start->next==start)
            start=nullptr;
        else
            start=p->next;
        delete p;
    }
}
    void deletelast()
    {
        node *p;
    if(start)
    {
        if(start->next=start)
        {
            delete start;
            start=nullptr;
        }
        else
        {
            p=start->prev;
            p->prev->next=start;
            start->prev=p->prev;
            delete p;
        }
    }
    }
    void deletespecefic(node *temp)
    {
        node *n=new node;
        if(start)
        {
            if(start->next==start)
             {
                n->prev=start->prev;
                n->next=start;
                start->next->prev->next=n;
                start->prev=n;
            }
        }
        else if(start->prev->next=start)
             {
                 node *p;
                p=start->prev;
                p->prev->next=start;
                start->prev=p->prev;
                delete p;
             }
        else
            {
                temp->prev->next=temp->next;
                temp->next->prev=temp->prev;
                delete temp;
            }
        }
     ~CDLL()
     {
         while(start)
             deletefirst();
     }
    void printlist()
    {
        if (start)
    {
        node *t = start;
        cout << "\nList is: ";
        do
        {
            cout << t->item << " ";
            t = t->next;
        } while (t != start);
    }
    else
        cout << "\nList is emtpy..!!";
    }
};


int main()
{
    CDLL obj;
    obj.insertatstart(3);
    return 0;
}
