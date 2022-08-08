#include <iostream>
using namespace std;
int main()
{
    long long int x, n, i, s = 0, c = 0, t;
    cin >> t >> x >> n;
    long long int a[t + 2];
    for (i = 1; i <= t; i++)
    {
        cin >> a[i];
        // s=s+a[i];
        if (a[i] <= x)
        {
            s = s + a[i];
            if (s > n)
            {
                c++;
                s = 0;
            }
        }
    }
    cout << c;
}
