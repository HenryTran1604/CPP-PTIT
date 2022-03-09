#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int n, k, count=0;
		cin >> n >> k;
		int a[n], b[1000]={};
		for(int i=0; i<n; i++)
		{
			cin >> a[i];
			b[a[i]]++;
		}
		for(int i=0; i<=k; i++)
		{
			if(i==k-i and b[i]!=0) count+=b[i]*(b[i]-1);
			else count+=b[i]*b[k-i];
		}
		cout << count/2<<endl;
	}
	return 0;
}
    



