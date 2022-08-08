#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, n, c = 0, d = 0;
    cin >> n;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    string a = v[0], b;
    for (int i = 0; i < n; i++)
    {
        if (a == v[i])
            c++;
        else
        {
            b = v[i];
            d++;
        }
    }
    if (c > d)
        cout << a;
    else
        cout << b;
}