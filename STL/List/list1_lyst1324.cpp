#include<iostream>
#include<list>
using namespace std;
int main()
{
    list <int> l1;
    list <int>l2={50,10,40,20,30};
    l1.assign(2,5);
    for(auto x:l2)
        cout<<x<<" ";
    cout<<endl;
    list<int>::iterator it=l2.begin();
    it++; //10
    it++; //40
    it++; //20
    l2.insert(it,{100,200});
    it=l2.begin();
    list<int>::iterator it1,it2;
    it1=++it;
    ++it;
    ++it;
    it2=++it;
    l2.erase(it1,it2);


    
    for(it=l2.begin();it!=l2.end();it++)
        cout<<*it<<" ";
    return 0;
}