#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--)
	{
		int n, m;
		cin >> n >> m;
		int a[n][m];
		for(int i=0; i<n; i++)
			for(int j=0; j<m; j++)
				cin >> a[i][j];
		int b[n][m];
		int d=0, cot = m, hang=n, gt=1;
		while(gt<n*m)
		{
			//tao gia tri tu 01 den 0(cot-2)
			for(int i=d; i<cot-1; i++) {
				b[d][i+1] = a[d][i];
				gt++;
			}
			// tao gia tri tu 1(cot-1) den (hang-1)(cot-1)
			for(int i=d+1; i<hang; i++){
				b[i][cot-1] = a[i-1][cot-1];
				gt++;
			}
			// tao gia tri tu (hang-1)(cot-2) den (hang-1)0
			for(int i=cot-2; i>=d; i--){
				b[hang-1][i] = a[hang-1][i+1];
				gt++;
			}
			// tao gia tri tu (hang-2)0 den 00
			for(int i=hang-2; i>=d; i--){
				b[i][d] = a[i+1][d];
				gt++;
			}
			d++, cot--, hang--;
		}
		if(n==m and n%2!=0) b[n/2][n/2] = a[n/2][n/2];
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++)
				cout << b[i][j] << " ";
		}
		cout << endl;
	}
    return 0;
}



