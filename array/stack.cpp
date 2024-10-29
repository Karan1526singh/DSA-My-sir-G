#include"insert,delete of array.cpp"
#include<iostream>
using namespace std;
class stack : private array
{
public :
    stack(int );
    void push(int);
    void pop();
    int peek();
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
stack :: ~stack()
{
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
        return get(count()-1);
    }
}
 stack :: stack(int cap):array(cap)
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
    array(4);
    stack s(5);
    s.push(3);
    s.push(3);
    s.push(3);

    s.pop();
    if(s.stackoverflow())
    cout<<"ture";
    else
        cout<<"false ";
    if(s.stackunderflow())
        cout<<"ture ";
    else
        cout<<"false";

    cout<<s.peek();
    return 0;
}

