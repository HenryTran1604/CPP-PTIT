#include <bits/stdc++.h>
using namespace std;
void inp(int a[][50], int rows, int cols)
{
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<cols; j++)
		{
			cin >> a[i][j];
		}
	}
}

int main(){
	int n, m, p;
	cin >> n >> m >> p;
	int a[50][50], b[50][50];
	inp(a, n, m);
	inp(b, m, p);
	// nhan hai ma tran;
	int res[n][p];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<p; j++)
		{
			res[i][j]=0;
			for(int k=0; k<m; k++)
			{
				res[i][j] += a[i][k]*b[k][j];
			}
		}
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<p; j++)
			cout << res[i][j] << " ";
		cout << endl;
	}
		
    return 0;
}




