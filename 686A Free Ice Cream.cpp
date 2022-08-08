#include <iostream>
using namespace std;
int main()
{
    long long int x, t, n, k = 0;
    cin >> t >> x;
    while (t--)
    {
        char ch;
        cin >> ch >> n;
        if (ch == '+')
            x += n;
        else if (ch == '-' && n <= x)
            x -= n;
        else if (ch == '-' && x < n)
            k++;
    }
    cout << x << " " << k;
}

