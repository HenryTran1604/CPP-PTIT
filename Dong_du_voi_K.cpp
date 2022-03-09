#include <bits/stdc++.h> 
using namespace std; 
int main() { 
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[n], minn = INT_MAX;
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			minn = min(minn, a[i]);
		}
		int ucln = a[0] - minn;
		for(int i = 1; i < n; i++)
		{
			ucln = __gcd(ucln, a[i] - minn);
		}
		int cnt = 0;
		for(int i = 1; i <= ucln; i++)
		{
			if(ucln%i==0) cnt++;
		}
		cout << cnt << endl;
	}
	return 0;
}


