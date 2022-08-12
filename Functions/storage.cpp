#include <iostream>
using namespace std;

int global=345;

int main()
{
    int local=23;
    cout<<local<<" "<<global<<endl;
    return 0;
}