#include<iostream>
using namespace std;
class greatest
{
private :
    int capacity;
    int last_index;
    int *p;
public :
    greatest(int cap)
    {
        capacity =cap;
        p=new int[capacity];
        last_index=-1;
    }
    void  append (int data)
{
        last_index++;
        p[last_index]=data;
}
   void sorting ()
   {
       if(last_index==-1)
       {
           cout<<"empty array";
       }
       int max;
       max=p[0];
       for(int i=1;i<=last_index;i++)
       {
           if(max<p[i])
            max=p[i];
       }
       cout<<"greatest "<<max;
   }
};
int main()
{
    greatest s1(10);
    s1.append(2);
    s1.append(4);
    s1.append(10);
    s1.append(7);
    s1.append(8);
    s1.sorting();
}
