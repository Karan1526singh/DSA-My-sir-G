#include<iostream>
#include<utility>
#include<tuple>
#include<string>
using namespace std;
int main()
{
    tuple <int,double,string> t1(1,5.6,"ABC");
    tuple <int,string,string> t2;
    t2=make_tuple(10,"Bhopal","Concert");
    cout<<get<0>(t1)<<" "<<get<1>(t1)<<" "<<get<2>(t1);

    pair <int,string>p1{10,"ABC"};
    pair <int,int> p2(20,30);
    pair <string,string> p3;
    p3=make_pair("Rahul","Gupta");
    pair <int,string>p4(p1);
    cout<<p3.first<<endl<<p3.second;
    cout<<endl;
    return 0;
}

