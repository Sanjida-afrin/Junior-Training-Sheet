#include <iostream>
using namespace std;
int main()
{
    int x, n, k, c = 0;
    cin >> n >> x;
    k = (2 * n) + 1;
    int a[k + 1];
    for (int i = 1; i <= k; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= k; i++)
    {

        if (i % 2 == 0 && c < x)
        {
            if (a[i - 1] < a[i] - 1 && a[i] - 1 > a[i + 1])
            {
                cout << a[i] - 1 << " ";
                c++;
            }
            else
                cout << a[i] << " ";
        }
        else
            cout << a[i] << " ";
    }
}