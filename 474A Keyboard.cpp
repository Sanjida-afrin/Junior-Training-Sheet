#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s, s1;
    char ch;
    int pos, i;
    s1 = "qwertyuiopasdfghjkl;zxcvbnm,./";
    cin >> ch;
    cin >> s;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (ch == 'R')
        {
            pos = s1.find(s[i]);
            s[i] = s1[pos - 1];
        }
        if (ch == 'L')
        {
            pos = s1.find(s[i]);
            s[i] = s1[pos + 1];
        }
    }
    cout << s;
}

