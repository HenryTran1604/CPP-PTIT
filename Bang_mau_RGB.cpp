#include <bits/stdc++.h>
using namespace std;
#define ll long long
int ToHop(int n, ll k)
{
	ll res = 1;
	for(ll i = 1; i <= k; i++)
	{
		res = (res*(n-k+i))/i;
	}
	return res;
}
ll Tinh(ll n, ll r, ll g, ll b)
{
	ll res = 0;
	for(ll i = r; i <= n-g-b; i++)
	{
		for(ll j = g; j <= n-r-b; j++)
		{
			for(ll k = b; k <= n-r-g; k++)
			{
				if(i + j + k == n)
				{
					res += ToHop(n, i)*ToHop(n-i, j);
				}
			}
		}
	}
	return res;
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		ll n, r, g, b, sum;
		cin >> n >> r >> g >> b;
		sum = r + g + b;
		if(sum > n)
			cout << 0 << endl;
		else
		{
			cout << Tinh(n, r, g, b) << endl;
		}
		
	}
	return 0;
}
