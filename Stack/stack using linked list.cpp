#include<iostream>
using namespace std;
struct node{
    int item;
    node *next;
};
class stack{
private :
    node *top;

public :
    stack();
    void push(int);
};
stack :: stack()
{
    top=nullptr;
}
void stack :: push(int data)
{
    node *n=new node;
    n->item=data;

}
