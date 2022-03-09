#include <bits/stdc++.h>
using namespace std;
int sum_le(int n)
{
	int res = 0;
	while(n>0)
	{
		res += n%10;
		n/=10;
	}
	return res;
}
int sum_pr(int n)
{
	int i=2, res=0, temp = n;
	while(n%2==0)
	{
		res+=2;
		n/=2;
	}
	for(int i=3; i<= sqrt(n); i+=2)
	{
		while(n%i==0)
		{
			if(i>10) res += sum_le(i);
			else
				res += i;
			n/=i;
		}
	}
	if(n>1)
	{
		if(n == temp || temp == 2) return 0;
		res += sum_le(n);
	}
	return res;
}
int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		if(sum_le(n) == sum_pr(n) and n!=2) cout << "YES"<< endl;
		else cout << "NO" << endl;
		
	}
	return 0;
}

