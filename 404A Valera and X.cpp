#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i, j, n, x, s = 0, sum = 0, k = 0;
    char c, A[400][400];
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> A[i][j];
            c = A[0][0];
        }
    }
    // cout<<endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                // cout<<A[i][j];
                if (A[i][j] == c)
                    s++;
            }
            if (i + j == n - 1)
            {
                if (A[i][j] == c)
                    sum++;
            }
            else if (A[i][j] == A[0][1])
                k++;
        }
    }
    // cout<<s<<sum<<k;
    if ((2 * n == s + sum) && ((n * n) - (s + sum) == k - 1))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
