#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n = 0, c, r, i, j, m = 0;
    cin >> c >> r;
    char k;
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            cin >> k;
            if (k == 'Y' || k == 'M' || k == 'C')
                n++;
            else if (k == 'B' || k == 'W' || k == 'G')
                m++;
        }
    }
    if (c * r == n)
        cout << "#Color";
    else if (c * r == m)
        cout << "#Black&White";
    else
        cout << "#Color";
}