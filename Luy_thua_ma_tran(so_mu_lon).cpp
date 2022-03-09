#include <bits/stdc++.h>
#define mod 1000000007

using namespace std;
long long n, k;
struct Matrix{
	long long f[11][11];
};
Matrix operator *(Matrix a, Matrix b)
{
	Matrix c;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			c.f[i][j] = 0;
			for(int p = 0; p < n; p++)
				c.f[i][j] = (c.f[i][j] + (a.f[i][p]%mod)*(b.f[p][j]%mod)%mod)%mod;
		}
	}
	return c;
}
Matrix PowerMatrixMod(Matrix a, long long k)
{
	if(k == 1)
		return a;
	Matrix x = PowerMatrixMod(a, k/2);
	if(k%2==0) return x*x;
	return a*x*x;
	/*if (k==1)
        return a;
    if (k%2!=0)
        return PowerMatrixMod(a,k-1)*a;
    Matrix tmp = PowerMatrixMod(a,k/2);
    return tmp*tmp;*/
}
int main(){
    
    int t; cin >> t;
    while(t--)
    {
    	cin >> n >> k;
    	Matrix a;
    	for(int i = 0; i < n; i++)
    	{
    		for(int j = 0; j < n; j++)
    			cin >> a.f[i][j];
		}
		Matrix res = PowerMatrixMod(a, k);
		for(int i = 0; i < n; i++)
    	{
    		for(int j = 0; j < n; j++)
    			cout << res.f[i][j] << " ";
    		cout << endl;
		}
		cout << endl;
	}
    return 0;
}


