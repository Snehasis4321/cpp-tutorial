#include <iostream>
using namespace std;

int display(int a){return a;};
double display(double d){return d;}
float display(float f){return f;}


int main()
{
    cout<<display(10)<<endl;
    cout<<display(10.333334)<<endl;
    cout<<display(10.6)<<endl;
    return 0;
}