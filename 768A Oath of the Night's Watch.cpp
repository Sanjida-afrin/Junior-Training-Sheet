#include <bits/stdc++.h> 
using namespace std;
int main()
{
    long long int i, x, y, c = 0, k = 0;
    cin >> x;
    long long int a[x + 1];
    for (i = 0; i < x; i++)
    {
        cin >> a[i];
    }
    sort(a, a + x);
    // int min=-1000000,max=1000000;
    for (int i = 0; i < x; i++)
    {
        // cout<<a[i];
        if (a[i] > a[0] && a[i] < a[x - 1])
            c++;
    }
    cout << c << endl;
}