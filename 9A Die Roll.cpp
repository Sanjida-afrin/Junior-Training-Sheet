#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int x, y, k, s;
    cin >> x >> y;
    k = max({x, y});
    if (k == 1)
        cout << "1/1" << endl;
    else if (k == 2)
        cout << "5/6" << endl;
    else if (k == 3)
        cout << "2/3" << endl;
    else if (k == 4)
        cout << "1/2" << endl;
    else if (k == 5)
        cout << "1/3" << endl;
    else if (k == 6)
        cout << "1/6" << endl;
    else
        cout << "0/1" << endl;
    return 0;
}