#include <iostream>
using namespace std;
int main()
{
    int i, x, y, c = 0, k;
    cin >> x;
    int a[x + 1];
    for (i = 1; i <= x; i++)
    {
        cin >> k;
        a[k] = i;
    }
    for (i = 1; i <= x; i++)
    {
        cout << a[i] << " ";
    }
}

