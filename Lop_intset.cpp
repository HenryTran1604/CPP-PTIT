#include <bits/stdc++.h>
using namespace std;

int main()
{
	ifstream fi("DATA.in");
	int n, m; fi >> n >> m;
	int c[1001]={}, x, maxx = 0;
	for(int i = 0; i < n; i++)
	{
		fi >> x;
		maxx = max(maxx, x);
		c[x] = 1;
	}
	for(int i = 0; i < m; i++)
	{
		fi >> x;
		maxx = max(maxx, x);
		if(c[x] == 1) c[x] = 2;
	}
	for(int i = 1; i <= maxx; i++)
	{
		if(c[i] == 2 ) cout << i << " ";
	}
	fi.close();
	return 0;
}

