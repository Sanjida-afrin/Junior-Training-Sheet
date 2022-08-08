#include <iostream>
using namespace std;
int main()
{
    long long int x, n, i, k;
    cin >> x >> n;
    for (i = 1;; i++)
    {
        if ((x * i) % 10 == n || (x * i) % 10 == 0)
        {
            k = i;
            break;
        }
    }
    cout << k;
}
