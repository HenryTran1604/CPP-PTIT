#include <bits/stdc++.h>
using namespace std;
int Min_div(int n)
{
	if(n==1) return 1;
	else if(n%2==0) return 2;
	else
	{
		for(int i=3; i<= sqrt(n); i+=2)
		{
			if(n%i==0) return i;
		}
	}
	return n;
}
int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		for(int i=1; i<=n; i++)
		{
			cout << Min_div(i)<<" ";
		}
		cout << endl;
		
	}
	return 0;
}
    



