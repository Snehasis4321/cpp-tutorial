#include <iostream>
using namespace std;

int main()
{
    int a=20,b=25;
    //arithmatic operators +-/*%
    cout<<a+b<<endl;
    cout<<a-b<<endl;
    cout<<a*b<<endl;
    cout<<a/b<<endl;
    cout<<a%b<<endl;

    //increment decrement operators ++ --
    cout<<(a++)<<"\n";
    cout<<(++a)<<endl;

    //assignment operators =, += ,-=
    a+=a;
    cout<<a<<endl;

    //relational operators > < 
    cout<<(a>=b)<<endl;

    //logical expression ! && ||
    cout<<!(a<=b)<<endl;

    //bitwise operators & | ^ - ~ << >> 
    cout<<(a&b)<<endl;
    cout<<(a|b)<<endl;
    
    return 0;
}