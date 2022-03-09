#include <bits/stdc++.h>
using namespace std;
void nhap(int a[], int n)
{
	for(int i = 0; i < n; i++)	cin >> a[i];
}
int solve(int a[], int b[], int n, int m)
{
	int sum = 0, t = 0;
	for(int i = 0; i < n; i++)
	{
		t += a[i];
		int k = 0;
		for(int j = i+1; j < m; j++)
		{
			k += b[j];  
		}
		sum = max(sum, k+t);
	}
	return sum;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, m; cin >> n >> m;
		int a[n], b[m];
		nhap(a, n); nhap(b, m);
		cout << max(solve(a, b, n, m), solve(b, a, m, n)) << endl;
	}
	return 0;
}
