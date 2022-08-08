#include <iostream>
using namespace std;
int main()
{
    long long int x, n, a, s, k;
    cin >> x >> n >> a;
    s = x / a;
    k = n / a;
    if (x % a)
        s++;
    if (n % a)
        k++;
    cout << s * k << endl;
}