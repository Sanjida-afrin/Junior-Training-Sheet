#include <iostream>
using namespace std;
int main()
{
    int x, i, c = 0, s = 0;
    cin >> x;
    int a[x + 1];
    for (i = 0; i < x; i++)
    {
        cin >> a[i];
        s += a[i];
        if (s < 0)
        {
            c++;
            s = 0;
        }
    }
    cout << c;
}