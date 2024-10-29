#include"insert,delete of array.cpp"
class sort:public array
{
public :
    sort(int);
    void sorting();
    friend void sorting();
};
sort :: sort(int cap):array(cap){}
void sort :: sorting()
{
    for(int i=0;i<count();i++)
    {
        for(int j=1;j<count();j++)
        {
            if(ptr[i]<ptr[j])
                ptr[i]=ptr[j];
        }
    }
}
int main()
{
    sort s1(4);
    a.append(53);
    a.append(22);
    a.append(23);
    a.sorting();
    a.get();
}
