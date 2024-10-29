#include<iostream>
#include<list>
using namespace std;
int main()
{
    list <int> l1;
    list <int> l2={32,3,5,6,7};
    l2.emplace_back(40);
    l2.emplace_front(32);
    //explicit
    list <int> :: iterator it;
    for(it=l2.begin();it!=l2.end();it++)
        cout<<*it<<" ";
    //implicit
    for(auto x:l2)
        cout<<x;

    return 0;
}
