#include<iostream>
using namespace std;
struct node{
    node *next;
    int item;
};
class linked_queue
{
private :
   node *front,*rear;
public :
    linked_queue();
    void insert_data(int);
    bool isempty();
    int getrear();
    int getfront();
    void deletefront();
    ~linked_queue();
    int countelement();

};

int linked_queue :: countelement()
{
    node *t=front;
    int count=0;
    while(t!=nullptr)
    {

        count++;
        t=t->next;
    }
    return count;
}
linked_queue :: linked_queue()
{
    while(!isempty())
        deletefront();
}
void linked_queue :: deletefront()
{
    node *r;
    if(!isempty())
    {
        r=front;
        front=front->next;
        if(front==nullptr)
            rear==nullptr;
        delete r;
    }
    else
        cout<<"queue underflow";
}
int linked_queue :: getfront()
{
    return front->item;
}
int linked_queue :: getrear()
{
    return rear->item;
}
bool linked_queue :: isempty()
{
    if(rear==nullptr)
        return 1;
    return 0;
}
linked_queue :: linked_queue()
{
    front=rear=nullptr;
}
void linked_queue :: insert_data(int data)
{
    node *n=new node;
    n->item=data;
    n->next=nullptr;
    if(isempty())
        front=rear=n;
    else
        {
            rear=n;
            rear->next=n;
        }

}
