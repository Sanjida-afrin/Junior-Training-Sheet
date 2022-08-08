#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s, s1;
    cin >> s >> s1;
    int i, j = 0;
    for (i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] == s[j])
            j++;
    }
    cout << j + 1;
}
