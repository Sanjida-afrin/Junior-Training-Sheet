#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, n, i;
    cin >> n;
    int a[n + 1];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (i = 0; i < n; i++)
    {
        cout << a[i];
        cout << " ";
        if (i == n - 1)
            break;
    }
}