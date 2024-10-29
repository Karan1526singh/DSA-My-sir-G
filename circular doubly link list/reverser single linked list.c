#include<iostream>
sturct node
{
    int data;
    node *p;
}
class reverse
{
    node *start;
public :
    void insertAtStart(int data)
{
    node *temp = new node;
    temp->item = data;
    temp->next = start;
    start = temp;
}
    void reverse()
    {
        node *p1=start;
        node *p2=start->next;
    }
};

int main()
{
    reverse obj;
    obj.insertatstart(3);
    return 0;
}
