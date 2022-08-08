#include <iostream> 
using namespace std;
int main()
{
    int p, q, x, y, t, i, c = 0;
    cin >> t;
    for (i = 1; i <= t; i++)
    {
        cin >> p >> q;
        if (p <= q)
        {
            x = q - p;
            if (x / 2 > 0)
                c++;
        }
    }
    cout << c;
}

