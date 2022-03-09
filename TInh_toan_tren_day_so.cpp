#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		long long h=1, g, a[n];
		for(int i=0; i<n; i++)
		{
			cin >> a[i];
			h = (h*a[i])%mod;
			if(i==0) g = a[0];
			else 
				g = __gcd(g, a[i]);
		}
		long long res=1;
		for(long long i=0; i<g; i++)
		{
			res = (res*h)%mod;
		}
		cout << res<< endl;
	}
	return 0;
}


