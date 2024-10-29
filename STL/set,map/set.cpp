#include<set>
#include<iostream>
#include<string>
using namespace std;
class Employee{
    private:
        int empid;
        string name;
        double salary;
    public:
        Employee(int id,string n,double s):empid(id),name(n),salary(s)
        {}
        void showEmployee(){
            cout<<empid<<" "<<name<<" "<<salary<<endl;
        }
        int getEmpid(){
            return empid;
        }
        string getName(){
            return name;
        }
        double getSalary(){
            return salary;
        }
};
class CompareBySalary{
    public:
        bool operator()(Employee e1,Employee e2) const
        {
            if(e1.getSalary() < e2.getSalary())
                return true;
            else
                return false;
        }
};
int f1();
int mai()
{
    //f2();
    multiset <int> s1={10,20,10,40,30,20,40,10,20,10};
    for(auto x:s1)
        cout<<x<<" ";
    cout<<endl;
    return 0;
}
int in()
{
    set <Employee,CompareBySalary> s1;

    s1.insert(*new Employee(1,"Rahul",20000.0));
    s1.insert(*new Employee(2,"Jay",10000.0));
    s1.insert(*new Employee(3,"Sunita",40000.0));
    s1.insert(*new Employee(4,"Arjun",30000.0));
    for( auto x : s1)
        x.showEmployee();
    cout<<endl;
    return 0;
}
int main()
{
    set <int> s1={10,10,30,20,50,40,70};
    for(auto x:s1)
        cout<<x<<" ";
    cout<<endl;
    cout<<s1.count(10)<<endl;
    cout<<s1.size()<<endl;
    s1.erase(s1.begin());
    set<int>::iterator it;
    for(it=s1.begin();it!=s1.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    cout<<endl;
    return 0;
}

