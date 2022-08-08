#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long int x, n, t, c = 0, i, f[102] = {0};
    cin >> t;
    long long int a[t + 1], b[t + 1];
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
        f[a[i]]++;
    }
    cin >> x;
    for (i = 1; i <= x; i++)
    {
        cin >> b[i];
        f[b[i]]++;
    }
    for (i = 1; i <= t; i++)
    {
        if (f[i] >= 1)
            c++;
    }
    if (c == t)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";
}
