#include <iostream>
using namespace std;
int main()
{
    long long int x, n, t, c = 1;
    cin >> x >> t;
    if (t == 10 && x == 1)
        cout << -1 << endl;
    else if (x == 2 && t == 10)
        cout << t;
    else
    {
        cout << t;
        for (int i = 1; i < x; i++)
        {
            cout << 0;
            c++;
            if (((t == 10) && c == x - 1))
                break;
        }
    }
    return 0;
}