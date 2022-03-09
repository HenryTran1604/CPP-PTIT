#include <bits/stdc++.h>
using namespace std;
void nhap(float a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		int x; cin >> x;
		a[i] = log(x)/x;
	}
	sort(a, a+n);
}
void xuat(float a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
int main() {
	// x^y > y^x <=> ln(x)/x > ln(y)/y => upper_bound()
	int t; cin >> t;
	while(t--)
	{
		int n, m, cnt = 0; cin >> n >> m;
		float a[n], b[m];
		nhap(a, n); nhap(b, m);
		for(int i = 0; i < m; i++)
		{
			int id = upper_bound(a, a+n, b[i]) - a;
			cnt += (n-id);
		}
		cout << cnt << endl;
	}
	return 0;
}
