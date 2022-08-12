#include <iostream>
using namespace std;

struct Employee{
    char name[50];
    int id,age;
    double salary;
};

int main()
{
    Employee e1;
    cin>>e1.name>>e1.id>>e1.age>>e1.salary;
    cout<<e1.name<<endl;
    cout<<e1.id<<endl;
    cout<<e1.salary<<endl;
    return 0;
}