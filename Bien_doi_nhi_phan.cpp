#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--)
    {
    	int n, m;
    	cin >> n >> m;
    	bool a[n][m], res[100][100]={};
    	for(int i=0; i<n; i++)
    	{
    		for(int j=0; j<m; j++)
    			cin >> a[i][j];
		}
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++){
				if(a[i][j]==1)
				{
					for(int k=0; k<n; k++) // thay tat ca phan tu hang i bang 1
						res[k][j] = 1;
					for(int k=0; k<m; k++) // thay tat ca phan tu cot j bang 1
						res[i][k] = 1;
				}
			}
		}
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++)
			{
				cout << res[i][j] << " ";
			}
			cout << endl;
		}
    	cout << endl;
	}
    return 0;
}


