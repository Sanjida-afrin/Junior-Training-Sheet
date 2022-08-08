#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int x, n = 0, t, i, c = 0;
    cin >> t;
    long long int a[t + 1], b[t + 1];
    for (i = 0; i < t; i++)
    {
        cin >> a[i] >> b[i];
    }
    for (i = 0; i < t; i++)
    {
        if (a[i] < b[i])
            c = 1;
    }
    if (c == 1)
        cout << "Happy Alex";
    else
        cout << "Poor Alex";
    return 0;
}