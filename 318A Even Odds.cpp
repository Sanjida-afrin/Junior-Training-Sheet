#include <iostream>
using namespace std;
int main()
{
    long long int x, n, k, d;
    cin >> n >> x;
    if (n % 2 == 0)
    {
        d = n / 2;
    }
    else
    {
        d = n / 2 + 1;
    }
    if (x <= d)
    {
        cout << x * 2 - 1 << endl;
    }
    else
    {
        cout << (x - d) * 2 << endl;
    }

    return 0;
}
