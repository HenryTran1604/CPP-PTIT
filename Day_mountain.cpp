#include <bits/stdc++.h>
using namespace std;
bool check(int a[], int L, int R)
{
	int count = 0;
	a[R+1] = 0;
	for(int i=L; i<=R; i++)
	{
		if(a[i] > a[i+1]) count++;
		if(a[i]<=a[i+1] and count!=0) 
		{
			return 0;
		}
	}
	return 1;
}
int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int n, L, R;
		cin >> n;
		int a[n+1];
		for(int i=0; i<n; i++)
			cin >> a[i];
		cin >> L >> R;
		if(check(a, L, R)==1) cout << "Yes";
		else cout << "No";
		cout << endl;
	}
	return 0;
}
    




