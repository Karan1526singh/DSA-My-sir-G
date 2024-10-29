#include"insert,delete of array.cpp"
#include<iostream>
using namespace std;
class stack : private array
{
public :
    stack(int );
    void push(int);
    int peek();
    void pop();
    ~stack();
    bool stackoverflow();
    bool stackunderflow();
    void reversestack();
};
void stack :: reversestack()
{

}
bool stack :: stackunderflow()
{
    return (isempty());
}
bool stack :: stackoverflow()
{
    return (isfull());
}
stack() :: stack()
{
    ~array();
}
void stack :: pop()
{
    if(isempty())
        cout<<"underflow ";
    else
        del((count()-1));
}
int stack :: peek()
{
    if(!isempty())
    {
        return (get(count()-1));
    }
}
void stack :: stack(int cap):array(cap)
{
}
void stack :: push(int data)
{
    if(isfull())
    {
        cout<<"stack overflow";
    }
    else
        append(data);
}
int main()
{
    stack s(4);
    s.push(3);
    cout<<s.peek();
}
