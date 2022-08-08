#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, t, k, d, s;
    cin >> n >> t >> k >> d;
    s = (d / t) + 1;
    if (s * k >= n)
        cout << "NO";
    else
        cout << "YES";
}