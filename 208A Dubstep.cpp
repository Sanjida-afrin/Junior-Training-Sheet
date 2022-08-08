#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int k = 0;
    cin >> s;
    for (int i = 0; s[i] != '\0'; i = i + k)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            k = 3;
        }
        else
        {
            cout << s[i];
            k = 1;
            if (s[i + 1] == 'W' && s[i + 2] == 'U' && s[i + 3] == 'B')
                cout << " ";
        }
    }
    // cout<<s;
}