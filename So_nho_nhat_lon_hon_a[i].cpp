#include <bits/stdc++.h>
#define ll  long long
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n];
		set <int> s;
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			s.insert(a[i]);
		}
		for(int i = 0; i < n; i++)
		{
			auto it = s.find(a[i]); it++;
			if(it == s.end()) cout << "_ "; 
			else cout << *it << " ";
		}
		cout << endl;
	}
	return 0;
}



