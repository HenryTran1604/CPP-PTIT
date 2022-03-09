#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;
int main()
{
	int t; cin >> t;
	while(t--)
	{
		long long n, x; cin >> n >> x;
		long long a[n];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		long long res = a[n-1], tmp = 1;
		for(int i = n-2; i >= 0; i--)
		{
			tmp = (tmp * x) %mod;
			res += (a[i] * tmp)%mod;
		}
		cout << res % mod;
		cout << endl;
	}
	return 0;
}

