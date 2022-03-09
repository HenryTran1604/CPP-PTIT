#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		long long maxx = INT_MIN, tmp = 1;
		int n; cin >> n;
		long long a[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		for(int i = 0; i < n; i++)
		{
			tmp = 1;
			for(int j = i; j < n; j++)
			{
				tmp *= a[j];
				maxx = max(tmp, maxx);
				if(tmp == 0) break;
			}
		}
		cout << maxx << endl;
	}
	
	return 0;
}
