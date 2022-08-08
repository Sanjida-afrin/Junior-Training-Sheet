#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c = 0;
    string s;
    cin >> s;
    int l = s.size();
    sort(s.begin(), s.end());
    for (int i = 0; i < l; i++)
    {
        if (s[i] != s[i + 1])
            c++;
    }
    if (c % 2 != 0)
        cout << "IGNORE HIM!" << endl;
    else
        cout << "CHAT WITH HER!" << endl;
}