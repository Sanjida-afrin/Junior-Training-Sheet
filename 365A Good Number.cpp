#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long x, n, i, j, c = 0, a = 0, b = 0, l;
    cin >> n >> x;
    string s;
    for (i = 1; i <= n; i++)
    {
        cin >> s;
        sort(s.begin(), s.end());
        a = 0, b = 0;
        for (j = 0; s[j] != '\0'; j++)
        {
            if (a == (s[j] - '0'))
                b++, a++;
            // cout<<a;
        }
        if (b >= x + 1)
            c++;
    }
    cout << c;
}
