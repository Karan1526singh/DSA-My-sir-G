#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main()
{
    stack <int> s1;  //based on deque
    stack <int,vector<int>> s2; //based on vector
    s2.push(20);
    s2.push(100);
    s2.push(50);
    cout<<endl<<s2.top()<<" "<<s2.size();
    cout<<endl;
    return 0;
}
