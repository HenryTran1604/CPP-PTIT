#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
    	int n, m, L; cin >> n >> m >> L;
    	int a[n][m], tmp[n][m], res[n][m];
    	for(int i = 0; i < n; i++)
    	{	
    		for(int j = 0; j < m; j++)
    		{
    			cin >> a[i][j];
    			tmp[i][j] = a[i][j];
    			if(j > 0)
				{
					if(j <= L-1)
						tmp[i][j] += tmp[i][j-1];
					else tmp[i][j] += tmp[i][j-1] - a[i][j-L];
				}    			
			}
		}
    	for(int j = 0; j < m; j++)
    	{
    		for(int i = 0; i < n; i++)
    		{
    			res[i][j] = tmp[i][j];
    			if(i > 0)
				{
					if(i <= L-1)
						res[i][j] += res[i-1][j];
					else res[i][j] += res[i-1][j] - tmp[i-L][j];
				}
			}
		}
		for(int i = L-1; i < n; i++)
		{
			for(int j = L-1; j < m; j++)
			{
				cout << res[i][j]/(L*L) << " ";
			}
			cout << endl;
		}
	}
    return 0;
}
