#include <iostream>
using namespace std;

int main()
{
    int one_d[] = {15, 36, 3, 5, 63};
    int n = sizeof(one_d) / sizeof(one_d);
    int two_d[3][2] = {{1, 3}, {2, 6}, {6, 0}};
    cout << one_d[n - 1]<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            cout << two_d[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}