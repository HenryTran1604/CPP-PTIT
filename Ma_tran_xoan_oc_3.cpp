#include<bits/stdc++.h>
using namespace std;
bool check(int &gt, int n)
{
	if(gt > n) return 0;
	else gt++;
}
int main(){
	int t;
	cin >> t;
	while(t--)
	{
		int n, m, p;
		cin >> n >> m >> p;
		int a[n][m], b[n*m];
		for(int i=0; i<n; i++)
			for(int j=0; j<m; j++)
				cin >> a[i][j];
		int d=0, cot = m-1, hang=n-1, k=0, temp = n*m;
		while(k < temp)
		{
			for(int i=d; i<=cot; i++) b[k++] = a[d][i];
			for(int i=d+1; i<=hang; i++) b[k++] = a[i][cot];
			for(int i=cot-1; i>=d; i--) b[k++] = a[hang][i];
			for(int i=hang-1; i>d; i--) b[k++] = a[i][d];
			d++, cot--, hang--;
		}
		cout << b[p-1];
		cout << endl;
	}
    return 0;
}



