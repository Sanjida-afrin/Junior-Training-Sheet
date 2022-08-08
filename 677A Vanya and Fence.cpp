#include <iostream>
using namespace std;
int main()
{
    int n, i, x, s = 0, m = 0, y;
    cin >> n >> x;
    int a[n + 1];
    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] <= x)
            s = s + 1;
        else if (a[i] > x)
            m = m + 2;
    }
    y = s + m;
    cout << y;
}