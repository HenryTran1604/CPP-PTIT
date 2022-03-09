#include <bits/stdc++.h>
#define ll long long
using namespace std;
long long nC2(ll n)
{
	return n*(n-1);
}
bool cmp2(string a, string b)
{
	if(a.size() < b.size()) return 1;
	else
	{
		if(a.compare(b) < 0) return 1;
	}
	return 0;
}
int main()
{
	ll n; cin >> n;
	map <string, ll> mp;
	set<string> se;
	
	for(ll i=0; i<n; i++)
	{
		string s;
		cin >> s;
		se.insert(s);
		mp[s]++;
	}
	vector <string> v(se.begin(), se.end());
	//sort(v.begin(), v.end(), cmp2);
	
	ll res = 0;
	ll k = v.size();
	for(ll i=0; i < k ; i++)
	{
		res += nC2(mp[v[i]]);
		for(ll j=0; j < k; j++)
		{
			if(i != j && v[j].find(v[i], 0)!= -1)
			{
				res += mp[v[i]]*mp[v[j]];
//				cout << v[i] << ":" << mp[v[i]] << " " << v[j] << ":" << mp[v[j]] << endl;
			}
		}
		//cout << v[i] << endl;
	}
	cout << res;
	return 0;
}

