#include <bits/stdc++.h>
#define max 100000
using namespace std;

int main()
{
	int n, k, b; cin >> n >> k >> b; // b: so den hong, k: so den can thiet
	bool a[max] ={};
	for(int i = 1; i <= b; i++)
	{
		int temp;
		cin >> temp;
		a[temp] = 1; // den hong danh dau la 1
	}
	int ans = INT_MAX, sum = 0;
	for(int i = 1; i <= k; i++)
	{
		if(a[i] == 1) sum++;
	}
	ans = sum;
		for(int i = 2, j = k+1; j <= n; i++, j++)
		{
			sum = sum - a[i-1] + a[j];
			ans = min(ans, sum);
		}
		cout << ans;		

    return 0;
}
