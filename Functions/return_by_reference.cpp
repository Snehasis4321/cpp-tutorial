#include <iostream>
using namespace std;

int num;

int &test();

int main()
{
    // assign 6 to num variable 
    test()=6;
    cout<<num;
    return 0;
}

int &test(){
    return num;
}