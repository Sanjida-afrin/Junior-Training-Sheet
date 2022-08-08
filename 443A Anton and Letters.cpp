#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int c = 0, f[26], i, k = 0, j;
    memset(f, 0, sizeof(f));
    for (i = 1; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            f[s[i] - 'a']++;
    }
    for (j = 0; j < 26; j++)
    {
        if (f[j] > 1 || f[j] == 1)
        {
            c = c + 1;
        }
    }
    cout << c << endl;
}
