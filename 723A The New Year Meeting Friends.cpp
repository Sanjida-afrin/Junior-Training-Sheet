#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int a, b, c, s, k, sum;
    cin >> a >> b >> c;
    s = max({a, b, c});
    k = min({a, b, c});
    sum = s - k;
    cout << sum;
}