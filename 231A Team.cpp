#include <iostream>
using namespace std;
int main()
{
    int x, y, z, i, t, k = 0;
    cin >> t;
    while (t--)
    {
        int s = 0;
        cin >> x >> y >> z;
        s = x + y + z;
        if (s == 2 || s == 3)
            k++;
    }
    cout << k;
}