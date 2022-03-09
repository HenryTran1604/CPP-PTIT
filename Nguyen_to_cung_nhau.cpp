#include <bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
	if(n<2) return 0;
	else if(n<4) return 1;
	else if(n%2==0 or n%3==0) return 0;
	else
	{
		int tmp = sqrt(n);
		for(int i=5; i<= tmp; i+=6)
		{
			if(n%i==0 or n%(i+2)==0) return 0;
		}
	}
	return 1;
}
int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int count = 0;
		for(int i=0; i<n; i++)
			if(__gcd(i, n)==1) count++;
		if(isprime(count)==1) cout << 1 ;
		else cout << 0;
		cout << endl;
	}
	return 0;
}
    




