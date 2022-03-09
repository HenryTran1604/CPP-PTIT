#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, m; cin >> n >> m;
		long long a[n][m], sum = 0;
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> a[i][j];
		long long ke[3][3];
		for(int i = 0; i < 3; i++)
			for(int j = 0; j < 3; j++)
				cin >> ke[i][j];
				
		int hang = 0, cot = 0;
		for(int hang = 0; hang < n-2; hang++)
		{
			for(int cot = 0; cot < m - 2; cot++)
			
				for(int i = 0; i < 3; i++)
				{
					for(int j = 0; j < 3; j++)
					{
						sum += a[hang+i][cot+j]*ke[i][j];
					}
				}
		}
		cout << sum;
		cout << endl;
	}
	return 0;
}
