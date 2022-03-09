#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9+7;
ll solve(ll a, ll b, ll c)
{
	if(b == 0) return 0;
	ll tmp = solve(a, b/2, c);
	if(b%2==0) return (2*(tmp%c))%c;
	return (a%c + 2*(tmp%c))%c;
}
int main() {
	int t; cin >> t;
	while(t--)
	{
		ll a, b, c; cin >> a >> b >> c;
		cout << solve(a, b, c) << endl;
	}
	return 0;
}
