#include<iostream>
using namespace std;
int main ()
{
  long long int n, x, i, j;
  cin >> n;
  long long int a[n + 1], max = -1e18, min = 1e18, mx;
  for (i = 1; i <= n; i++)
    {
      cin >> a[i];
    }
    cout<<abs(a[1]-a[2])<<" "<<abs(a[1]-a[n])<<endl;
  for (i = 2; i < n; i++)
    {
      cout<<std::min(abs(a[i]-a[i-1]),abs(a[i]-a[i+1]))<<" "<<std::max(abs(a[i]-a[n]),abs(a[i]-a[1]))<<endl;
	}
      
    cout<<abs(a[n]-a[n-1])<<" "<<abs(a[n]-a[1])<<endl;
  return 0;
}


