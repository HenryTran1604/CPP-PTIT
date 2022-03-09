#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

int main() {
	int t;
	cin >> t;
	int f[1001];
	f[0]=0, f[1]=1;
	for(int i=2; i<1001; i++)
	{
		f[i] = f[i-1]%mod + f[i-2]%mod;
	}
	while(t--)
	{
		int n;
		cin >> n;
		cout << f[n]%mod;
		cout << endl;
	}
	return 0;
}
    




