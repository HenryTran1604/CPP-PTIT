#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--)
	{
		string s1, s2;
		cin >> s1 >> s2;
		int n1 = s1.length(), n2 = s2.length(), logic = 0;
		int a[26] = {};
		for(int i = 0; i < n2; i++)
		{
			a[s2[i] - 'a']++;
		}
		string res = s1 + "longer";
		for(int i = 0; i < n1; i++)
		{
			string test = ""; int dem = 0;
			vector <int> v(a, a+26);
			for(int j = i; j < n1; j++)
			{
				if(v[s1[j] - 'a'] > 0)
				{
					v[s1[j] - 'a']--;
					dem++;
				}
				test.push_back(s1[j]);
				if(dem == n2)
				{
					if(test.length() < res.length()){
						res = test;
						logic = 1;
					}
				}
			}
		}
		if(logic == 1) cout << res;
		else cout << -1;
		cout << endl;
	}
	return 0;
}
