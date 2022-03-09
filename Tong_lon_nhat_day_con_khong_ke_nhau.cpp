#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		ll a[n], dp[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		dp[0] = a[0];
		dp[1] = a[1];
		dp[2] = a[0] + a[2];
		for(int i = 3; i < n; i++)
		{
			dp[i] = a[i] + max(dp[i-2], dp[i-3]);
		}
		cout << max(dp[n-1], dp[n-2]) << endl;
	}
	return 0;
}
