#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x, n, i, j, a[5][5];
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            cin >> x;
            if (x == 1)
            {
                n = abs(i - 3) + abs(j - 3);
            }
        }
    }
    cout << n << endl;
}