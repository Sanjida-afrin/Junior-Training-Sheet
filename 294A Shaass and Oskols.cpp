#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, i, t;
    cin >> t;
    long long int a[t + 1];
    for (i = 1; i <= t; i++)
    {
        cin >> a[i];
    }
    cin >> n;
    long long int x[n + 1], y[n + 1];
    for (i = 1; i <= n; i++)
    {
        cin >> x[i] >> y[i];
        a[x[i] + 1] += a[x[i]] - y[i];
        a[x[i] - 1] += y[i] - 1;
        a[x[i]] = 0;
    }
    for (i = 1; i <= t; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}