#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a1, a2, a3, a4, n, i, sum = 0;
    string s;
    cin >> a1 >> a2 >> a3 >> a4;
    cin >> s;
    for (i = 0; s[i] != '\0'; i++)
    {
        int x = s[i] - '0';
        if (x == 1)
            sum = sum + a1;
        else if (x == 2)
            sum = sum + a2;
        else if (x == 3)
            sum = sum + a3;
        else if (x == 4)
            sum = sum + a4;
    }
    cout << sum;
}

