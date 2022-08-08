#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int x, n, i, k = 0, a[5][5000], f[5];
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> x;
        a[x][f[x]++] = i;
    }
    k = min({f[1], f[2], f[3]});
    cout << k << endl;
    for (i = 0; i < k; i++)
    {
        cout << a[1][i] << " " << a[2][i] << " " << a[3][i];
        cout << endl;
    }
}
