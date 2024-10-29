#include<iostream>
#include<queue>
#include<array>
using namespace std;
int main()
{
    queue <int,array<int,5>> q1;
    q1.push(20);
    q1.push(40);
    q1.push(70);
    q1.push(50);
    cout<<q1.front()<<" "<<q1.back();
    cout<<endl;
    return 0;
}
