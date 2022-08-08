#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, n, i, c = 0, k = 0, p = 0;
    cin >> n;
    vector<int> a(n), b(n);
    for (i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        if (a[i] != b[i])
            k = 1;
        if (a[i] <= a[i - 1] && b[i] <= b[i - 1] && i > 0)
        {
            c = 1;
            p++;
        }
    }
    if (k == 1)
        cout << "rated";
    else if (p == (n - 1) && c == 1)
        cout << "maybe";
    else
        cout << "unrated";
}