#include <iostream>
using namespace std;
int main()
{
    int x, k, l, m, n, s, i, d;
    cin >> x;
    for (i = x + 1;; i++)
    {
        k = i / 1000;
        l = (i % 1000) / 100;
        m = (i % 100) / 10;
        n = i % 10;
        if (k != l && k != m && k != n && l != m && l != n && m != n)
        {
            d = i;
            break;
        }
        // x=x+1;
    }
    cout << d;
}