#include <iostream>
using namespace std;

int main()
{
    int n=10,x=5;
    //for loop
    for (int i = 1; i <=10; i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    //while loop
    while(n!=0){
        cout<<n<<" ";
        n--;
    }  
    
    cout<<endl;
    //do while
    do{
        cout<<x<<" ";
        x--;
    }while(x>0);
    return 0;
}