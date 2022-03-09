#include <bits/stdc++.h>
using namespace std;
long long LCM_3(long long a, long long b, long long c)
{
	long long LCM1 = (a*b)/__gcd(a, b), res;
	return res = (c*LCM1)/__gcd(c, LCM1);
 } 
int main() {
	int t;
	cin >> t;
	long long num[19];
		num[1] = 1;
	for(int i=2; i<19; i++)
	{
		num[i] = 10*num[i-1];
	}
	while(t--)
	{
		long long a, b, c, N, temp;
		cin >> a >> b >> c >> N;
		long long LCM = LCM_3(a, b, c);
		N = num[N];
		if(LCM < 10 and N==1) cout << LCM;
		else if(LCM > 10*N-1) cout << -1;
		else
		{
			if(N%LCM!=0) temp = N/LCM;
			else temp = N/LCM-1;
			cout << (temp+1)*LCM;
		}
	cout << endl;
	}
	return 0;
}
    



