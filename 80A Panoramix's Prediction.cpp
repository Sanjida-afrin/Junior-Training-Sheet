#include <iostream>
using namespace std;
int main()
{
    int x, n, i, j, f = 1, k = 0;
    cin >> n >> x;
    // i=n+1;
    for (i = n + 1; i <= 1000; i++)
    {
        f = 1;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                f = 0;
                // cout<<f;
                break;
            }
        }
        if (f == 1)
        {
            k = i;
            break;
        }
    }
    if (k == x)
        cout << "YES";
    else
        cout << "NO";
}

