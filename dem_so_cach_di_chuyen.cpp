#include <bits/stdc++.h>
using namespace std;
int n, a[25][25], dem = 0, b[25], k;
void update()
{
	int sum = 0;
	for(int i = 1; i <= 2*n-1; i++)
		sum += b[i];
	if(sum == k) dem++;
}
void Try(int i, int x, int y)
{
	//if(x < n) b[i] = a[x][y];
	b[i] = a[x][y];
	if(i == 2*n-1)
		update();
	else
	{
		if(x+1 < n) Try(i+1, x+1, y);
		if(y+1 < n) Try(i+1, x, y+1);
	}
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n >> k;
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)
				cin >> a[i][j];
		Try(1, 0, 0);
		cout << dem << endl;
		dem = 0;
	}
}
