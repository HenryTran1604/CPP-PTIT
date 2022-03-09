#include <bits/stdc++.h>
using namespace std;
void nhap(long long a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}
int main() {
	int t; cin >> t;
	while(t--)
	{
		long long n, X; cin >> n >> X;
		long long a[n], sum = 0;
		nhap(a, n);
		int l = 0, r, ans = INT_MAX;
		for(r = 0; r < n; r++)
		{
			sum += a[r];
			while(sum > X)
			{
				ans = min(ans, r-l+1);
				sum -= a[l]; l++;
			}
		}
		if(ans == INT_MAX)
			cout << -1 << endl;
		else cout << ans << endl; 
	}
}


