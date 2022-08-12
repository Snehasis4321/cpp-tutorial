#include <iostream>
using namespace std;

// function with no return type and parameters are passed through it
void addition(int a, int b)
{
    cout << a + b << endl;
}

// function with return type of string
string greet(string s)
{
    return "Welcome " + s + " !!!";
}

int main()
{
    int x = 3, y = 4;
    string n;
    cin >> n;
    cout << greet(n) << endl;
    addition(x, y);
    // use of inbuild functions
    cout << max(x, y) << endl;
    return 0;
}