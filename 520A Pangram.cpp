#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, n, freq[26], temp = 0, i;
    cin >> n;
    string s;
    cin >> s;
    memset(freq, 0, sizeof(freq));
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
        freq[s[i] - 'a']++;
    }
    for (i = 0; i < 26; i++)
    {
        if (freq[i] == 0)
        {
            temp = 1;
            break;
        }
    }
    if (temp == 1)
        cout << "NO";
    else
        cout << "YES";
}