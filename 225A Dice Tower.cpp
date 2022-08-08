#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, f = 0;
    cin >> n;
    cin >> x;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        if (x == 6 || x == 1)
        {
            if ((a == 6 || b == 1) || (a == 1 || b == 6))
            {
                f = 1;
                break;
            }
        }
        else if (x == 2 || x == 5)
        {
            if ((a == 2 || b == 5) || (a == 5 || b == 2))
            {
                f = 1;
                break;
            }
        }
        else if (x == 3 || x == 4)
        {
            if ((a == 3 || b == 4) || (a == 4 || b == 3))
            {
                f = 1;
                break;
            }
        }
    }
    if (f == 0)
        cout << "YES";
    else
        cout << "NO";
}