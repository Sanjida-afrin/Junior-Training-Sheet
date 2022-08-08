#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int x, y, n, i, s = 0, k = 0, d = 0;
    cin >> n;
    long long int a[n + 1];
    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    x = 1;
    y = n;
    while (n--)
    {
        if (k == 0)
        {
            if (a[x] > a[y])
            {
                s = s + a[x];
                x++;
            }
            else
            {
                s = s + a[y];
                y--;
            }
            k = 1;
        }
        else if (k == 1)
        {
            if (a[x] > a[y])
            {
                d = d + a[x];
                x++;
            }
            else
            {
                d = d + a[y];
                y--;
            }
            k = 0;
        }
    }
    cout << s << " " << d << endl;
}