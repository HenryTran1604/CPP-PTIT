#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n], b[n];
		for(int i=0; i<n; i++)
		{
			cin >> a[i];
			b[i] = a[i];
		}
		sort(b, b+n);
		int first=1, end=n;
		bool logic1=0, logic2=0;
		for(int i=0; i<n; i++)
		{
			if(a[i]==b[i] and logic1==0) first++;
			else logic1=1;
			if(a[n-i-1] == b[n-i-1] and logic2==0) end--;
			else logic2=1;
		}
		if(first >= end) cout << "0 0\n";
		else
			cout << first << " " << end << endl;
	}
	return 0;
}
    






