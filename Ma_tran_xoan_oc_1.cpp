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
		int n, m;
		cin >> n >> m;
		int a[n][m];
		for(int i=0; i<n; i++)
			for(int j=0; j<m; j++)
				cin >> a[i][j];
		int d=0, cot = m, hang=n, gt=1, temp = n*m;
		while(gt < temp)
		{
			for(int i=d; i<cot; i++) {
				cout << a[d][i] <<" ";
				gt++;				
			}
			if(gt > temp) break;
			for(int i=d+1; i<hang; i++){
				cout << a[i][cot-1]<< " ";
				gt++;
			}
			if(gt > temp) break;
			for(int i=cot-2; i>=d; i--){
				cout << a[hang-1][i]<< " ";
				gt++;
			}
			if(gt > temp) break;
			for(int i=hang-2; i>d; i--){
				cout << a[i][d] << " ";
				gt++;
			}
			if(gt > temp) break;
			d++, cot--, hang--;
		}
		cout << endl;
	}
    return 0;
}



