#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s, s1;
    cin >> s;
    cin >> s1;
    int l, m;
    l = s.size();
    m = s1.size();
    if (s == s1)
        cout << "-1";
    else
        cout << max({l, m});
}
