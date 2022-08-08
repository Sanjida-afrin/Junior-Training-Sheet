#include <iostream>
using namespace std;
int main()
{
    string s;
    int i, l, c = 0, t, sum = 0, k = 0, p = 0;
    cin >> t;
    cin >> s;
    l = s.size();
    for (i = 0; i < l / 2; i++)
    {
        sum += (s[i] - '0');
        if (s[i] == '4' || s[i] == '7')
            c++;
    }
    for (i = l / 2; i < l; i++)
    {
        k += (s[i] - '0');
        if (s[i] == '4' || s[i] == '7')
            p++;
    }
    // cout<<sum<<k<<c<<p;
    if ((c + p) != t)
        cout << "NO";
    else if (c == p && sum == k)
        cout << "YES";
    else
        cout << "NO";
}

