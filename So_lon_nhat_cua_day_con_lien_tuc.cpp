#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, k; cin >> n >> k;
		int a[n];
		for(int &x : a)
			cin >> x;
		multiset <int> s;
		for(int i=0; i<k; i++)
			s.insert(a[i]);
		for(int i=k; i<n; i++)
		{
			cout << *s.rbegin() << " ";
			s.erase(s.find(a[i-k]));
			s.insert(a[i]);
		}
		cout << *s.rbegin();
		cout << endl;
	}
	return 0;
}

