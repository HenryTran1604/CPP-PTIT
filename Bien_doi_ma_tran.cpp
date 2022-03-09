#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[n][n], maxx = 0, sum = 0;
		int SumRow[n] = {0}, SumCol[n] = {0};
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
				cin >> a[i][j];
			
		}
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
			{
				SumRow[i] += a[i][j];
				SumCol[i] += a[j][i];
				sum += a[i][j];
			}
			maxx = max(maxx, max(SumRow[i], SumCol[i]));
		}
		cout << maxx*n - sum << endl;
		
	}
	return 0;
}
