#include <iostream>
using namespace std;
int main()
{
    int x, n, k, i, s = 0;
    cin >> x >> n >> k;
    for (i = 1; i <= k; i++)
    {
        s += i * x;
    }
    if (s < n)
        cout << "0";
    else
        cout << s - n;
}
