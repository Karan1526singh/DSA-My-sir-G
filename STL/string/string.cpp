#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
    string s1="mysirg education services";

    string::iterator it;


    cout<<endl;
    for(it=s1.begin();it!=s1.end();it++)
        cout<<*it;
    cout<<endl;
    s1+=" private";

    for(auto x : s1)
        cout<<x;
    cout<<endl;
    cout<<s1.capacity()<<endl;
    cout<<s1.size()<<endl;
    try
    {
        for(int i=0;true;i++)
            cout<<s1.at(i);
    }
    catch(out_of_range e){
        cout<<"\nException: Out of range";
    }
    cout<<endl;
    for(int i=0;i<s1.length();i++)
        cout<<s1[i];
    //cout<<s1;
    cout<<endl<<endl;
    return 0;
}

