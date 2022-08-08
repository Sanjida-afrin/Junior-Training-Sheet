#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int x = 0, n, i, k = 1, s;
    cin >> n;
    s = (n * (n + 1)) / 2;
    for (i = 1; i <= s; i = i + k)
    {
        // x=i;
        // cout << i;
        if (n == i)
        {
            x = i;
            break;
        }
        k++;
    }
    // cout<<x;
    if (n == x)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}