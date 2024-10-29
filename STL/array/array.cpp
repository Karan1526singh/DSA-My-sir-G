#include<iostream>
#include<array>
using namespace std;
int main()
{
    array <int ,4> a1;
    array <int ,3> a2{3,4,4};
    array <int ,4> a3={4,5,6};
    array <int ,4> a4=a1;

    //cout<<a2.at(2);

    // explicit iterator

     array<int,3> :: iterator it;

     for(it = a2.begin();it!=a2.end();it++)
        cout<<*it<<" ";

     cout<<endl;
      it=a2.begin();
      *it = 100;

    // implicit iterator
        for(auto x : a2)
            cout<< x ;
}
