#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int l = s.size();
    sort(s.begin(), s.end());
    for (int i = 0; i < l - 1; i++)
    {

        if ((s[i] >= '1' && s[i] <= '3') && (i != l - 1))

            cout << s[i] << '+';
    }
    cout << s[(l - 1)] << endl;
}
