#include <iostream>
using namespace std;
int main()
{
    long long int i, x, y, c = 0, k = 0;
    cin >> x >> y;
    long long int a[x + 1];
    for (i = 1; i <= x; i++)
    {
        cin >> a[i];
    }
    for (i = 1; i <= x; i++)
    {
        if (a[i] >= a[y] && a[i] != 0)
            c++;
    }
    cout << c;
}