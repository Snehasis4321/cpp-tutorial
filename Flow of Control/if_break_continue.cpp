#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 10; i++)
    {
        if(i==4)continue; //4 will be skipped as the condition gets skipped
        if(i==8)break;   //loop will be stopped as control goes out of the for loop
        cout<<i<<" ";
    
    }
    
    return 0;
}