#include<iostream>
using namespace std;
class array
{
    int capacity;
    int last_index;
    int *ptr;
public :
    array(int);
    bool isempty();
    void append(int );
    void insert(int, int );
    void edit(int ,int );
    void del(int );
    bool isfull();
    int  get(int );
    int count();
    int find(int );
    int search(int);
    void sumofelements();
    void rotatearray();
    void second_largest();
    void duplicate();
    ~array()
    {
       delete[]ptr;
    }
};
void array :: second_largest()
{
     for(int i=0;i<=last_index;i++)
    {
        for(int j=1;j<=last_index;j++)
        {
            if(ptr[i]<ptr[j])
            ptr[i]=ptr[j];
        }
    }
    cout<<endl<<ptr[1];
}
void array :: duplicate()
{
    for(int i=0;i<=last_index;i++)
    {
        for(int j=1;j<=last_index;j++)
        {
            if(ptr[i]==ptr[j])
            {
                del(i);
            }
        }
    }
}
void array :: rotatearray()
{
    for(int i=0;i<=last_index;i++)
    {
        ptr[i+1]=ptr[i];
    }
}
void array :: sumofelements()
{
    int sum=0;
    for(int i=0;i<=last_index;i++)
    {
        sum+=ptr[i];
    }
    cout<<endl<<sum;
}
int array :: search(int data)
{
    for(int i=0;i<last_index;i++)
    {
        if(ptr[i]==data)
            return 1;
    }
    return 0;
}
int array :: find(int data)
{
    int i;
    for(i=0;i<=last_index;i++)
    {
        if(ptr[i]==data)
       return 1;
    }
    return -1;

}
int array :: count()
{
    return last_index+1;
}
int  array :: get(int index)
{
     return ptr[index];
}
bool array :: isfull()
{
    return last_index==capacity+1;
}
void array :: del(int index)
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
}
void array :: edit(int index,int data)
{
    if(index>0 && index<=last_index)
        ptr[index]=data;
}
void array :: insert(int index, int data)
{
    int i;
    if(last_index + 1== capacity)
    {
        cout<<endl<<"array is already full";
    }
    else if(index > last_index +1 || index < 0)
    {
        cout<<"Invalid index ";
    }
    else
    {
        for(i=last_index;i!=index;i--)
            ptr[i+1]=ptr[i];
        ptr[index]=data;
        last_index++;
    }
}
void array :: append(int data)
{
    if(last_index + 1== capacity)
    {
        cout<<endl<<"array is already full";
    }
    else
        last_index++;
    ptr[last_index]=data;
}
bool array :: isempty()
{
    return last_index == -1;
}
array :: array(int cap)
{
    capacity=cap;
    last_index=-1;
    ptr=new int[capacity];

}
