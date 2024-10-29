#include<iostream>
using namespace std;

struct node{
    int item;
    node *next;
    int pno;
};
class Pqueue{
private:
    node *start;
public :
    Pqueue()
{
    start=nullptr;
}
void insert(int data ,int no)
{
    node *n=new node;
    node *t=start;
    n->item=data;
    n->pno=no;
    if(start==nullptr)
    {
        n->next=nullptr;
        start=n;
    }
    else
    {
        while(t->next!=nullptr)
        {
            if(t->next->pno >= n->no)
            {
                t=t->next;
            }
            else
                break;

            n->next=t->next;
            t->next=n;
        }
    }
}
void del()
{
    node *r;
    if(start)
    {
        r=start;
        start=start->next;
        delete r;
    }
}
node* gethighestpriority()
{
    if(start)
    {
        return start;
    }
    return -1;
}
node* gethighestpriority_no()
{
    if(start)
    {
        return start->pno;
    }
    return -1;
}
~Pqueue()
{

    while(start)
    {
        delete del();
    }
}
bool isempty()
{
    if(start)
        return true;
    else
        return false;
}
};
