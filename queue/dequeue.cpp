#include<iostream>
using namespace std;
struct node{
    int item;
    node *next;
    node *prev;
};
class dequeue
{
private :
    node *front;
    node *rear;
public :
    dequeue()
    {
        front=rear=nullptr;
    }
    void insert_atfront(int data)
    {
        node *n=new node;
        n->item=data;
        n->next=front;
        if(front)
        {
            front->prev=n;
        }
        else
            rear=n;
        front=n;
    }
    void insert_atrear(int data)
    {
        node *n=new node;
        n->item=data;
        n->prev=rear;
        n->next=nullptr;
        if(rear)
        {
            rear->next=n;

        }
        else
        {
            front=n;
        }
        rear=n;

    }
    void deletefront()
    {
        node *p;
        p=front;
        if(front)
        {
            if(front==rear)
            {
                front=rear=nullptr;
            }
            else
            {
                front=front->next;
                front->prev=nullptr;
            }

        }

        delete p;
    }
    void deleterear()
    {
        node *p;
        p=rear;
        if(rear)
        {
            if(front==rear)
            {
                front=rear=nullptr;
            }
            else
                {
                    rear=rear->prev;
                rear->next=nullptr;
                }
                delete p;
        }
    }
    int get_frontelement()
    {
        node *p=front;
        if(front)
        {
            return front->item;
        }
        else
            cout<<"underflow";
    }
    int get_rearelement()
    {
        node *p=rear;
        if(rear)
        {
            return rear->item;
        }
        else
            cout<<"overflow";
    }
    ~dequeue()
    {
        while(front)
        {
            deletefront();
        }
    }
    int isempty()
    {
        if(front)
            return false;
        else
            return true;
    }
};
