#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int n, k=0;
		cin >> n;
		int a[n+1], temp=0;
		for(int i=0; i<n; i++)
		{
			cin >> a[i];
		}
		a[n] = INT_MAX;
		for(int i=0; i<n; i++)
		{
			if(a[i]==a[i+1])
			{
				a[i] = 2*a[i];
				a[i+1] = 0;
			}
			
		}
		for(int i=0; i<n; i++)
		{
			if(a[i]!=0)
			{
				cout << a[i] << " ";
				temp++;
			}
		}
		for(int i=temp; i<n; i++)
		{
			cout << "0 ";
		}
		cout << endl;
		
	}
	return 0;
}
    




