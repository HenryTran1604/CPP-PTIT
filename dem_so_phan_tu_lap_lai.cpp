#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[n], dem = 0;
		map <int, int> mp;
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			mp[a[i]]++;
		}
		for(auto x : mp)
		{
			if(x.second > 1) dem += x.second;
		}
		cout << dem << endl;
	}
	return 0;
}
