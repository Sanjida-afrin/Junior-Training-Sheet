#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, x, i, j;
    cin >> n >> k;
    x = min({n, k});
    for (i = 0, j = 0; i < n; i++, j++)
    {
        if (j >= x)
            j = 0;
        cout << char('a' + j);
    }
}
