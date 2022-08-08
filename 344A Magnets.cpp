#include <iostream>
using namespace std;

int main()
{
    long long int x, n, c = 0, i;
    cin >> n;
    long long int a[n + 1];
    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (i = 1; i <= n; i++)
    {
        if (a[i] != a[i + 1])
            c++;
    }

    cout << c;
}
