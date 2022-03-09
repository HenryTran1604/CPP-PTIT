#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, m; cin >> n >> m;
		int a[n][m];
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> a[i][j];
		int sum = n+m, cnt = 0, id, tmp[100];
		 vector <int> v;
		while(cnt < sum)
		{
			int k = 0;
			if(cnt - m < 0)
				id = 0;
			else
				id++;
			//cout << id << endl;
			for(int i = id; cnt-i >= 0 && i < n;  i++)
			{
				tmp[k] = a[i][cnt-i];
				//cout <<id << ":" << i << cnt-i << " ";
				k++;
			}
			if(cnt%2 == 0) 
				for(int i = k-1; i >= 0; i--)
					v.push_back(tmp[i]);
			else
				for(int i = 0; i < k; i++)
					v.push_back(tmp[i]);
			cnt++;
		}
		for(int x : v)
			cout << x << " ";
		cout << endl;
	}
	return 0;
}
