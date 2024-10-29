#include<iostream>
using namespace std;
class Dynarray
{
    int capacity;
    int last_index;
    int *ptr;
public :
    Dynarray(int cap)
    {
        capacity=cap;
        last_index=-1;
        ptr=new int[capacity];
    }
    bool isempty();
    void append(int );
    void insert(int, int );
    void edit(int ,int );
    void del(int );
    int isfull();
    void get();
    int count();
    int find(int );
    void doublearray();
    void halfarray();
    int size();
    ~Dynarray()
    {
       delete[]ptr;
    }
};
void Dynarray :: del(int index)
{
    int i;
    if(isempty())
    {
        cout<<"empty array";
    }
    else if(index>last_index)
    {
        cout<<"invalid index";
    }
    else
        for(i=index;i<last_index;i++)
    {
        ptr[i]=ptr[i+1];
    }
    last_index--;
    if(last_index+1<=capacity/2 && capacity>1)
        halfarray();
}
void Dynarray :: insert(int index, int data)
{
    if(index>last_index+1 || index<0)
    {
      cout<<"invalid index:";
    }
    else
    {
        if(isfull())
        {
            doublearray();
            for(int i=last_index;i<=index;i++)
            {
                ptr[i+1]=ptr[i];
            }
            ptr[index]=data;
            last_index++;
        }
    }
}
void Dynarray :: append (int data)
{
    if(isfull())
    {
        doublearray();
        last_index++;
        ptr[last_index]=data;
    }
    else
        last_index++;
        ptr[last_index]=data;
}
int Dynarray :: size()
{
    return capacity;
}
void Dynarray :: halfarray()
{
    int *temp=new int[capacity/2];
    for(int i=0;i<=last_index;i++)
        temp[i]=ptr[i];

    delete []ptr;
     temp=ptr;
     capacity / 2;

}
void Dynarray :: doublearray()
{
    int *temp=new int[2*capacity];
    for(int i=0;i<=last_index;i++)
    {
        temp[i]=ptr[i];
    }
    capacity = 2*capacity ;
    delete []ptr;
    ptr=temp;

}
bool Dynarray :: isempty()
{
    return last_index ==-1;
}
void Dynarray :: edit(int index,int data)
{
    if(index>last_index || index<0)
        cout<<"invalid index";
    else
        ptr[index]=data;

}
int Dynarray :: find(int data)
{
    int i;
    for(i=0;i<=last_index;i++)
    {
        if(ptr[i]==data)
       return 1;
    }
    return -1;

}
int Dynarray :: count()
{
    return last_index+1;
}
void Dynarray :: get()
{
        for(int i=0;i<=last_index;i++)
        {
            cout<<ptr[i]<<endl;
        }

}
int Dynarray :: isfull()
{
    return last_index==capacity+1;
}
int main()
{
    Dynarray a(4);
    if(a.isempty())
        cout<<"empty";
    a.append(53);
    a.append(22);
    a.append(23);
    a.append(34);
    a.get();

}
