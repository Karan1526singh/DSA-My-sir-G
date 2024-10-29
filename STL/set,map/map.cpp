#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    multimap <int,string>m1={{1,"Ravi"},{2,"Nitin"},{1,"Rajesh"}};
    for(auto x:m1)
    {
        cout<<x.first<<"  "<<x.second<<endl;
    }
    cout<<endl;

    cout<<endl;
    return 0;
}
int f1()
{
    map <int,string> m1={ {1,"Bhopal"},{2,"Indore"},{3,"Pune"} };
    map <int,string> m2;
    pair <int,string> p1={1,"Patna"};
    m2.emplace(p1);
    cout<<m2.at(1)<<endl;
    for(auto x:m1)
    {
        cout<<x.first<<"  "<<x.second<<endl;
    }
    cout<<endl;

    cout<<m1.at(2)<<endl;

    map<int,string>::iterator it;
    for(it=m1.begin();it!=m1.end();it++)
        cout<<it->first<<" "<<it->second<<endl;
    cout<<endl;
    return 0;
}
