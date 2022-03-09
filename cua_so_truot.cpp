#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // nhap mang a
    int a[n+1][n+1];
    for(int i=1; i<=n; i++)
    	for(int j=1; j<=n; j++)
			cin >> a[i][j];
	int m;
	cin >> m;
	// nhap mang b
	int b[m+1][m+1];
	for(int i=1; i<=m; i++)
		for(int j=1; j<=m; j++)
			cin >> b[i][j];
	// tich chap 2 mang
	int hang=1, cot=1;
	for(int i=1; i<=n; i++)
	{
		if(i%m==1)	hang=1;
		else hang++;
		for(int j=1; j<=n; j++)
		{
			if(j%m==1)	cot = 1;
			else cot++;
			a[i][j] = a[i][j]*b[hang][cot];
		}
	}
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
			cout << a[i][j]<<" ";
		cout << endl;
	}
    return 0;
}


