#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int x, y, t, i, c = 0, sum = 0, s = 0;
    cin >> t;
    long long int a[t + 1];
    for (i = 0; i < t; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a + t);
    for (i = t - 1; i >= 0; i--)
    {
        if (s > sum / 2)
            break;
        c++;
        s += a[i];

        // cout<<s;
    }
    cout << c;
    return 0;
}