#include <iostream>
using namespace std;
int main()
{
    int x, n, k;
    cin >> x >> n;
    if (x > n)
        swap(x, n);
    k = n - x;
    cout << x << " " << k / 2;
}

