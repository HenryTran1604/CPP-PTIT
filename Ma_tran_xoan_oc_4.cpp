#include<bits/stdc++.h>
using namespace std;
bool check(int &gt, int n)
{
	if(gt > n) return 0;
	else gt++;
}
int main(){
		int n;
		cin >> n;
		int a[n*n], b[n][n];
		for(int i=0; i<n*n; i++)
			cin >> a[i];
		sort(a, a+n*n);
		int d=0, cot = n-1, hang=n-1, k=0;
		while(k<n*n)
		{
			for(int i=d; i<=cot; i++) b[d][i] = a[k++];
			for(int i=d+1; i<=hang; i++) b[i][cot] = a[k++];
			for(int i=cot-1; i>=d; i--) b[hang][i] = a[k++];
			for(int i=hang-1; i>d; i--) b[i][d] = a[k++];
			d++, cot--, hang--;
		}
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
				cout << b[i][j] << " ";
			cout << endl;
		}
		cout << endl;
    return 0;
}



