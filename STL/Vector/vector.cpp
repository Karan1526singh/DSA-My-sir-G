#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    vector<int> v1={3,5,3,2,1};
    v.assign({2,3,4});
   // cout<<v1[3];
    //cout<<v[2];

     vector <int>:: iterator it;
     it = v1.begin();
     *(it+2)=100;

      for(it=v1.begin();it!=v1.end();it++)
      {
          cout<<*it<<" ";
      }
      v1.push_back(2);
      v1.insert(v1.begin(),{23,42,42});
    // implicit
    for(auto x:v1)
        cout<<x<<" ";
}

